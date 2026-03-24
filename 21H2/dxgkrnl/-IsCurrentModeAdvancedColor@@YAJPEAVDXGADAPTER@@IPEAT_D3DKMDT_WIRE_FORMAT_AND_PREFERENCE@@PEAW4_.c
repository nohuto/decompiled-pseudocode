/*
 * XREFs of ?IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEA_N@Z @ 0x1C00DD33C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C012C020 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C0124674 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01369BC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall IsCurrentModeAdvancedColor(
        struct DXGADAPTER *a1,
        unsigned int a2,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a3,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a4,
        bool *a5)
{
  bool *v5; // r12
  char v6; // bl
  __int64 v8; // rbp
  int SourceConnectedToTargetInClientVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  _QWORD *v15; // rax
  int CurrentWireFormatAndColorSpace; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v22; // [rsp+30h] [rbp-28h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v23[9]; // [rsp+34h] [rbp-24h] BYREF

  v5 = a5;
  v6 = 0;
  v8 = a2;
  v22.Value = 0;
  v23[0] = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
  *a5 = 0;
  LODWORD(a5) = 0;
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, (unsigned int *)&a5);
  v14 = SourceConnectedToTargetInClientVidPn;
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v15[3] = *((int *)a1 + 80);
    v15[4] = *((unsigned int *)a1 + 79);
    v15[5] = v8;
    v15[6] = v14;
LABEL_3:
    WdLogEvent5_WdError(v15);
    return (unsigned int)v14;
  }
  CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(a1, (unsigned int)a5, v8, &v22, v23);
  v14 = CurrentWireFormatAndColorSpace;
  if ( CurrentWireFormatAndColorSpace < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v15[3] = *((int *)a1 + 80);
    v15[4] = *((unsigned int *)a1 + 79);
    v15[5] = (unsigned int)a5;
    v15[6] = v8;
    v15[7] = v14;
    goto LABEL_3;
  }
  if ( a3 )
    a3->0 = v22.0;
  v20 = v23[0];
  if ( a4 )
    *a4 = v23[0];
  if ( (unsigned int)v20 <= 0x20 )
  {
    v21 = 0x140001000LL;
    if ( _bittest64(&v21, v20) )
      v6 = 1;
  }
  *v5 = v6;
  return 0LL;
}
