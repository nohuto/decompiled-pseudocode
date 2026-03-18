/*
 * XREFs of ?ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C0235C20
 * Callers:
 *     <none>
 * Callees:
 *     DpReadDeviceSpace @ 0x1C0020C80 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     ?IsWsl2Guest@DXGVIRTUALMACHINE@@QEBAEXZ @ 0x1C002590C (-IsWsl2Guest@DXGVIRTUALMACHINE@@QEBAEXZ.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ReadVirtualFunctionConfig(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIG *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 Offset; // rcx
  ULONG Length; // edx
  size_t v8; // r8
  char *v9; // rdx
  __int64 v11; // rcx
  ULONG v12; // edx
  ULONG v13; // edx
  int v14; // edi
  _BYTE *Data; // r14
  ULONG v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _BYTE v20[192]; // [rsp+0h] [rbp-118h] BYREF
  ULONG v21; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-40h]
  __int64 v23; // [rsp+E0h] [rbp-38h]

  v4 = 0;
  if ( !g_PciConfig.VendorID )
  {
    dword_1C00B1982 = 458894;
    g_PciConfig.VendorID = 5140;
    dword_1C00B1986 = 16;
    dword_1C00B198A = 770;
    word_1C00B198E = 0;
    qword_1C00B1990 = 0LL;
    qword_1C00B1998 = 0LL;
    qword_1C00B19A0 = 0LL;
    dword_1C00B19A8 = 0;
    qword_1C00B19AC = 0LL;
    qword_1C00B19B4 = 64LL;
    dword_1C00B19BC = 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL);
  Offset = a2->Offset;
  if ( (unsigned int)Offset >= 0xC0 )
  {
    Length = a2->Length;
    if ( Length + (unsigned int)Offset <= 0xD0 )
    {
      v8 = Length;
      v22 = *(_QWORD *)((char *)this + 28);
      v9 = &v20[Offset + 24];
      v23 = 0LL;
LABEL_6:
      memmove(a2->Data, v9, v8);
      return 0LL;
    }
  }
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled()
    && DXGVIRTUALMACHINE::IsWsl2Guest(*((DXGVIRTUALMACHINE **)this + 13)) )
  {
    v11 = a2->Offset;
    if ( (unsigned int)v11 >= 0xD0 )
    {
      v12 = a2->Length;
      if ( v12 + (unsigned int)v11 <= 0xD4 )
      {
        v8 = v12;
        v21 = 41;
        v9 = &v20[v11];
        goto LABEL_6;
      }
    }
    if ( (unsigned int)v11 >= 0xD4 )
    {
      v13 = a2->Length;
      if ( v13 + (unsigned int)v11 <= 0xDC )
      {
        v8 = v13;
        v9 = (char *)this + v11 - 184;
        goto LABEL_6;
      }
    }
  }
  v14 = 0;
  Data = a2->Data;
  if ( !a2->Length )
    return v4;
  while ( 1 )
  {
    v16 = v14 + a2->Offset;
    if ( v16 < 0x100 )
      break;
    Data[v14] = 0;
LABEL_25:
    if ( ++v14 >= a2->Length )
      return v4;
  }
  if ( v16 >= 4 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 348LL) & 4) != 0 )
  {
    Data[v14] = *((_BYTE *)&g_PciConfig.VendorID + v16);
    goto LABEL_25;
  }
  v21 = 0;
  v4 = DpReadDeviceSpace(v5, 0LL, &Data[v14], v16, 1u, &v21);
  if ( (v4 & 0x80000000) == 0 && v21 == 1 )
    goto LABEL_25;
  v19 = WdLogNewEntry5_WdError(v18, v17);
  *(_QWORD *)(v19 + 24) = a2->VirtualFunctionIndex;
  WdLogEvent5_WdError(v19);
  return v4;
}
