/*
 * XREFs of RaUnitQueryDeviceTextIrp @ 0x1C0073D8C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00083C0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     StorGetIdentityVendorId @ 0x1C0019B88 (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C0019BB8 (StorGetIdentityProductId.c)
 *     RtlStringCchPrintfW @ 0x1C0019C6C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1C0072394 (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryDeviceTextIrp(__int64 a1, IRP *a2)
{
  unsigned int Length; // ebp
  wchar_t *Pool; // rax
  int v6; // ebx
  wchar_t *v7; // rdi
  unsigned int v8; // r8d
  IRP *v9; // rcx
  _QWORD *v11; // r11
  _BYTE **v12; // r11
  char **DeviceType; // rax
  __int64 v14; // rax
  _BYTE *v15; // r9
  _BYTE *v16; // rax
  _BYTE *v17; // r9
  _BYTE v18[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v19[24]; // [rsp+40h] [rbp-38h] BYREF

  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x200uLL, 0x54516152u, *(_QWORD *)(a1 + 8));
  v6 = 0;
  v7 = Pool;
  if ( Pool )
  {
    if ( Length )
    {
      if ( Length == 1 )
      {
        RtlStringCchPrintfW(
          Pool,
          0x100uLL,
          L"Bus Number %d, Target Id %d, LUN %d",
          *(unsigned __int8 *)(a1 + 96),
          *(unsigned __int8 *)(a1 + 97),
          *(unsigned __int8 *)(a1 + 98));
      }
      else
      {
        ExFreePoolWithTag(Pool, 0);
        v7 = 0LL;
        v6 = -1073741637;
      }
      goto LABEL_5;
    }
    if ( (*(_DWORD *)(a1 + 1824) & 1) != 0 )
    {
      RtlStringCchPrintfW(Pool, 0x100uLL, L"VM passthrough LUN device");
      goto LABEL_5;
    }
    StorGetIdentityVendorId((_QWORD *)(a1 + 104), (__int64)v18);
    StorGetIdentityProductId(v11, (__int64)v19);
    DeviceType = PortGetDeviceType(**v12 & 0x1F);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 536LL) + 184LL) & 0x10) == 0 )
    {
      RtlStringCchPrintfW(v7, 0x100uLL, L"%hs %hs SCSI %hs Device", v18, v19, *DeviceType);
LABEL_5:
      a2->IoStatus.Information = (unsigned __int64)v7;
      v8 = v6;
      v9 = a2;
      return RaidCompleteRequestEx(v9, 0, v8);
    }
    v14 = *(_QWORD *)(a1 + 152);
    if ( v14 )
    {
      v15 = (_BYTE *)(v14 + 8);
      v16 = (_BYTE *)(v14 + 25);
      if ( !*v15 )
      {
        v17 = v16;
LABEL_18:
        RtlStringCchPrintfW(v7, 0x100uLL, L"%hs", v17);
        goto LABEL_5;
      }
    }
    else
    {
      v17 = *(_BYTE **)(a1 + 144);
      if ( v17 )
        goto LABEL_18;
      v16 = v19;
      v15 = v18;
    }
    RtlStringCchPrintfW(v7, 0x100uLL, L"%hs %hs", v15, v16);
    goto LABEL_5;
  }
  v9 = a2;
  if ( Length <= 1 )
    v8 = -1073741801;
  else
    v8 = -1073741637;
  return RaidCompleteRequestEx(v9, 0, v8);
}
