/*
 * XREFs of ?ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C035E910
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     DpReadDeviceSpace @ 0x1C0025680 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
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
  ULONG v10; // edx
  ULONG v11; // edx
  unsigned int v12; // edi
  _BYTE *i; // r14
  ULONG v14; // edx
  _BYTE v16[160]; // [rsp+0h] [rbp-118h] BYREF
  ULONG v17; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+D8h] [rbp-40h]
  __int64 v19; // [rsp+E0h] [rbp-38h]

  v4 = 0;
  if ( !g_PciConfig.VendorID )
  {
    dword_1C0132132 = 458894;
    g_PciConfig.VendorID = 5140;
    dword_1C0132136 = 16;
    dword_1C013213A = 770;
    word_1C013213E = 0;
    qword_1C0132140 = 0LL;
    qword_1C0132148 = 0LL;
    qword_1C0132150 = 0LL;
    dword_1C0132158 = 0;
    qword_1C013215C = 0LL;
    qword_1C0132164 = 64LL;
    dword_1C013216C = 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL);
  Offset = a2->Offset;
  if ( (unsigned int)Offset >= 0xC0 )
  {
    Length = a2->Length;
    if ( Length + (unsigned int)Offset <= 0xD0 )
    {
      v8 = Length;
      v18 = *(_QWORD *)((char *)this + 28);
      v9 = &v16[Offset + 24];
      v19 = 0LL;
LABEL_12:
      memmove(a2->Data, v9, v8);
      return v4;
    }
  }
  if ( (unsigned int)Offset >= 0xD0 )
  {
    v10 = a2->Length;
    if ( v10 + (unsigned int)Offset <= 0xD4 )
    {
      v8 = v10;
      v17 = 41;
      v9 = &v16[Offset];
      goto LABEL_12;
    }
  }
  if ( (unsigned int)Offset >= 0xD4 )
  {
    v11 = a2->Length;
    if ( v11 + (unsigned int)Offset <= 0xDC )
    {
      v8 = v11;
      v9 = (char *)this + Offset - 184;
      goto LABEL_12;
    }
  }
  v12 = 0;
  for ( i = a2->Data; v12 < a2->Length; ++v12 )
  {
    v14 = v12 + a2->Offset;
    if ( v14 < 0x100 )
    {
      if ( v14 >= 4 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 436LL) & 4) != 0 )
      {
        i[v12] = *((_BYTE *)&g_PciConfig.VendorID + v14);
      }
      else
      {
        v17 = 0;
        v4 = DpReadDeviceSpace(v5, 0LL, &i[v12], v14, 1u, &v17);
        if ( (v4 & 0x80000000) != 0 || v17 != 1 )
        {
          WdLogSingleEntry1(2LL, a2->VirtualFunctionIndex);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to read PCI config space: %I64n",
            a2->VirtualFunctionIndex,
            0LL,
            0LL,
            0LL,
            0LL);
          return v4;
        }
      }
    }
    else
    {
      i[v12] = 0;
    }
  }
  return v4;
}
