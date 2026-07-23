/*
 * XREFs of MdlInvariantPreProcessing1 @ 0x1405A19C8
 * Callers:
 *     IovpCallDriver1 @ 0x1409D0C4C (IovpCallDriver1.c)
 * Callees:
 *     MmMdlPageContentsState @ 0x14022C930 (MmMdlPageContentsState.c)
 *     RtlpComputeCrcInternal @ 0x14022C9A0 (RtlpComputeCrcInternal.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MdlInvariantFindMdlInfo @ 0x1405A1644 (MdlInvariantFindMdlInfo.c)
 *     MdlInvariantInsertMdlInfo @ 0x1405A1688 (MdlInvariantInsertMdlInfo.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall MdlInvariantPreProcessing1(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  _QWORD *MdlInfo; // rdi
  ULONG_PTR v13; // r11
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  ULONG_PTR v22; // r9
  ULONG_PTR v23; // rdx
  __int64 v24; // rdx
  __int128 v25; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+40h] [rbp-28h]
  int v27; // [rsp+48h] [rbp-20h]
  char v28; // [rsp+4Ch] [rbp-1Ch]
  __int16 v29; // [rsp+4Dh] [rbp-1Bh]
  char v30; // [rsp+4Fh] [rbp-19h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = 0LL;
  v29 = 0;
  v30 = 0;
  v9 = *(_QWORD *)(v4 + 8);
  if ( !*(_QWORD *)v9 )
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result >= 2u || *(_DWORD *)(v9 + 40) != -1 )
    {
      result = MmMdlPageContentsState(v9, 2u);
      if ( (_DWORD)result == 1 )
      {
        result = *(_QWORD *)(a1 + 168);
        v10 = *(_QWORD *)(result + 8);
        if ( (*(_BYTE *)(v10 + 10) & 5) != 0 )
        {
          v11 = *(_QWORD *)(v10 + 24);
        }
        else
        {
          result = (__int64)MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000020u);
          v11 = result;
        }
        if ( v11 )
        {
          MdlInfo = MdlInvariantFindMdlInfo(a2, *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL));
          if ( MdlInfo )
          {
            v14 = *(_BYTE *)(v13 + 67);
            if ( v14 == *(_BYTE *)(v13 + 66) || *((_BYTE *)MdlInfo + 28) == v14 )
            {
              *(_OWORD *)MdlInfo = 0LL;
              *((_OWORD *)MdlInfo + 1) = 0LL;
              MdlInfo = 0LL;
              *(_QWORD *)(*(_QWORD *)(a2 + 224) + 16LL) = 0LL;
              v13 = *(_QWORD *)(a1 + 168);
            }
          }
          result = *(_QWORD *)(v13 + 8);
          if ( !MdlInfo )
          {
            v15 = RtlpComputeCrcInternal(v11, *(unsigned int *)(result + 40), 0LL, (__int64)&Crc64Ctrl);
            v16 = *(_QWORD *)(a1 + 168);
            *((_QWORD *)&v25 + 1) = v15;
            v26 = v11;
            *(_QWORD *)&v25 = *(_QWORD *)(v16 + 8);
            v27 = *(_DWORD *)(v25 + 40);
            v28 = *(_BYTE *)(v16 + 67);
            return MdlInvariantInsertMdlInfo(a2, &v25);
          }
          v17 = *((unsigned int *)MdlInfo + 6);
          v18 = *(_DWORD *)(result + 40);
          if ( (_DWORD)v17 == v18 )
          {
            v20 = *(unsigned int *)(result + 40);
          }
          else
          {
            v19 = MdlInfo[2];
            if ( v11 < v19 || (v20 = v18, v21 = v19 + v17, result = v20 + v11, v20 + v11 > v21) )
            {
              v22 = v13;
              LOBYTE(v5) = *(_BYTE *)a3 != 4;
              v23 = v5 + 4112;
              return VerifierBugCheckIfAppropriate(0xC4u, v23, *(_QWORD *)(a3 + 40), v22, v11);
            }
          }
          if ( (MmVerifierData & 0x4000) != 0 )
          {
            result = RtlpComputeCrcInternal(v11, v20, 0LL, (__int64)&Crc64Ctrl);
            v24 = result;
            if ( MdlInfo[1] != result )
            {
              if ( *(_BYTE *)a3 == 4 )
              {
                v23 = 4112LL;
              }
              else
              {
                result = *(unsigned int *)(a3 + 8);
                if ( *(_DWORD *)(*(_QWORD *)(v4 + 184) + 8LL) != (_DWORD)result )
                {
                  MdlInfo[1] = v24;
                  return result;
                }
                v23 = 4113LL;
              }
              v22 = *(_QWORD *)(a1 + 168);
              return VerifierBugCheckIfAppropriate(0xC4u, v23, *(_QWORD *)(a3 + 40), v22, v11);
            }
          }
        }
      }
    }
  }
  return result;
}
