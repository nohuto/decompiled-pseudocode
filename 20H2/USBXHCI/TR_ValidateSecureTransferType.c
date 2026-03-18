/*
 * XREFs of TR_ValidateSecureTransferType @ 0x1C000D364
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C000CD50 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDi @ 0x1C00406CC (WPP_RECORDER_SF_DDi.c)
 */

__int64 __fastcall TR_ValidateSecureTransferType(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // ebx
  char v4; // r10
  int v6; // edx
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edx
  char v11; // [rsp+38h] [rbp-10h]

  v2 = *(_WORD *)(a2 + 2);
  v3 = 0;
  v4 = a2;
  if ( v2 > 0x38u && v2 <= 0x3Au )
  {
    if ( *(_BYTE *)(a1 + 280) )
    {
      v7 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v7 + 672) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = *(unsigned __int8 *)(v7 + 135);
        v9 = *(_QWORD *)(a1 + 56);
        v10 = *(_DWORD *)(v9 + 144);
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(v9 + 80),
          v10,
          v8,
          32,
          (__int64)&WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids,
          v8,
          *(_DWORD *)(v9 + 144),
          v4);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = a2;
        v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v6,
          a1,
          30,
          (__int64)&WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v11);
      }
      return (unsigned int)-1073741811;
    }
  }
  return v3;
}
