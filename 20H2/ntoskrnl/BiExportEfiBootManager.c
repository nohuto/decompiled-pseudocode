/*
 * XREFs of BiExportEfiBootManager @ 0x1409744A8
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x140974818 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2070 (memcmp.c)
 *     BcdOpenObject @ 0x14077FC60 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14077FDEC (BcdCloseObject.c)
 *     BiLogMessage @ 0x140780FBC (BiLogMessage.c)
 *     BiGetElement @ 0x140971E28 (BiGetElement.c)
 *     BiDeleteEfiVariable @ 0x14097416C (BiDeleteEfiVariable.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140974E44 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x140975144 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x14097521C (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1409753AC (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140975424 (BiSetBootOptions.c)
 *     BiTranslateDisplayOrder @ 0x140975588 (BiTranslateDisplayOrder.c)
 *     BiTranslateObjectIdentifier @ 0x1409756EC (BiTranslateObjectIdentifier.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiExportEfiBootManager(void *a1, __int64 a2)
{
  ULONG v3; // edi
  ULONG *v4; // r15
  void *v5; // r14
  void *v6; // rsi
  NTSTATUS v7; // eax
  int v8; // ebx
  int Element; // eax
  PVOID PoolWithTag; // rax
  int v11; // r14d
  int v12; // eax
  ULONG *v13; // r13
  ULONG v14; // ebx
  int v15; // eax
  ULONG v16; // eax
  int v17; // eax
  PVOID v18; // r14
  int v19; // eax
  int v20; // eax
  ULONG Count; // [rsp+20h] [rbp-49h] BYREF
  PVOID P; // [rsp+28h] [rbp-41h] BYREF
  int v24; // [rsp+30h] [rbp-39h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-31h] BYREF
  int v26; // [rsp+40h] [rbp-29h] BYREF
  ULONG v27; // [rsp+44h] [rbp-25h] BYREF
  void *Buf2; // [rsp+48h] [rbp-21h] BYREF
  int v29; // [rsp+50h] [rbp-19h] BYREF
  void *Buf1; // [rsp+58h] [rbp-11h] BYREF
  PVOID v31; // [rsp+60h] [rbp-9h] BYREF
  ULONG *v32; // [rsp+68h] [rbp-1h] BYREF
  _DWORD *v33; // [rsp+70h] [rbp+7h] BYREF
  __int64 v34; // [rsp+78h] [rbp+Fh]
  _BOOT_OPTIONS BootOptions; // [rsp+80h] [rbp+17h] BYREF

  v34 = a2;
  v27 = 0;
  v3 = 0;
  v24 = 0;
  v4 = 0LL;
  Count = 0;
  v5 = 0LL;
  v26 = 0;
  v6 = 0LL;
  v29 = 0;
  Buf1 = 0LL;
  P = 0LL;
  v31 = 0LL;
  BcdObjectHandle = 0LL;
  v32 = 0LL;
  Buf2 = 0LL;
  v33 = 0LL;
  memset(&BootOptions, 0, sizeof(BootOptions));
  v7 = BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -1073741772 )
      v8 = 0;
    goto LABEL_47;
  }
  Element = BiGetElement(BcdObjectHandle, 0x24000001u, &v31, &Count);
  v8 = Element;
  if ( Element >= 0 )
  {
    Count >>= 4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * Count, 0x4B444342u);
    Buf1 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_45;
    }
    BiTranslateDisplayOrder(a2, v31, PoolWithTag, &Count);
LABEL_10:
    v11 = BiQueryBootEntryOrder(&Buf2, &v26);
    v12 = BiHandleFirmwareDefaultEntry(a2, BcdObjectHandle, &Buf1, &Count);
    v13 = (ULONG *)Buf1;
    v8 = v12;
    if ( v12 < 0 )
      goto LABEL_39;
    v14 = Count;
    if ( v11 < 0 || !Count || v26 != Count || memcmp(Buf1, Buf2, 4LL * Count) )
    {
      v8 = BiSetBootEntryOrder(v13, v14);
      if ( v8 < 0 )
        goto LABEL_39;
    }
    BootOptions.Length = 24;
    BootOptions.Version = 1;
    v15 = BiGetElement(BcdObjectHandle, 0x25000004u, &v32, &v29);
    v4 = v32;
    v8 = v15;
    if ( v15 < 0 )
    {
      if ( v15 != -1073741275 )
        goto LABEL_39;
      v8 = BiDeleteEfiVariable(L"Timeout");
      if ( v8 < 0 )
        goto LABEL_39;
      BootOptions.Timeout = 0;
    }
    else
    {
      v16 = -1;
      v3 = 1;
      if ( *(_QWORD *)v32 <= 0xFFFFFFFFuLL )
        v16 = *v32;
      BootOptions.Timeout = v16;
    }
    v17 = BiGetElement(BcdObjectHandle, 0x24000002u, &P, &v24);
    v8 = v17;
    if ( v17 >= 0 )
    {
      v18 = P;
      v3 |= 2u;
      v8 = BiTranslateObjectIdentifier(v34, P, &v27);
      if ( v8 >= 0 )
      {
        BootOptions.NextBootEntryId = v27;
        goto LABEL_29;
      }
      goto LABEL_40;
    }
    if ( v17 == -1073741275 )
    {
      v19 = BiDeleteEfiVariable(L"BootNext");
      v18 = P;
      v8 = v19;
      if ( v19 >= 0 )
      {
        BootOptions.NextBootEntryId = 0;
LABEL_29:
        v24 = 0;
        v20 = BiQueryBootOptions(&v33, &v24);
        v6 = v33;
        if ( v20 >= 0 && *v33 == BootOptions.Version )
        {
          if ( (v3 & 1) != 0 && v33[2] == BootOptions.Timeout )
            v3 &= ~1u;
          if ( (v3 & 2) != 0 && v33[4] == BootOptions.NextBootEntryId )
            v3 &= ~2u;
        }
        if ( v3 )
          v8 = BiSetBootOptions(&BootOptions, v3);
      }
LABEL_40:
      if ( v13 )
        ExFreePoolWithTag(v13, 0x4B444342u);
      if ( v18 )
        ExFreePoolWithTag(v18, 0x4B444342u);
      v5 = Buf2;
      goto LABEL_45;
    }
LABEL_39:
    v18 = P;
    goto LABEL_40;
  }
  if ( Element == -1073741275 )
  {
    Count = 0;
    goto LABEL_10;
  }
LABEL_45:
  if ( v31 )
    ExFreePoolWithTag(v31, 0x4B444342u);
LABEL_47:
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v8 < 0 )
    BiLogMessage(4LL, L"BiExportEfiBootManager failed: %x", (unsigned int)v8);
  return (unsigned int)v8;
}
