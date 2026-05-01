/*
 * XREFs of sub_180034400 @ 0x180034400
 * Callers:
 *     sub_180034344 @ 0x180034344 (sub_180034344.c)
 * Callees:
 *     sub_180036A48 @ 0x180036A48 (sub_180036A48.c)
 */

__int64 __fastcall sub_180034400(__int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // r8
  unsigned __int64 v4; // rbx
  int v5; // edi
  unsigned __int64 v6; // rax

  RtlAcquireSRWLockExclusive(&unk_1800B3E98);
  CurrentThreadId = GetCurrentThreadId();
  v4 = xmmword_1800B3EA8;
  dword_1800B3EA0 = CurrentThreadId;
  if ( (BYTE8(xmmword_1800B3EA8) & 1) != 0 && (_QWORD)xmmword_1800B3EA8 )
    v4 = (unsigned __int64)&xmmword_1800B3EA8 ^ xmmword_1800B3EA8;
  LOBYTE(v3) = 0;
  v5 = BYTE8(xmmword_1800B3EA8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( (int)sub_180036A48(a1 + 16, v4, v3) < 0 )
      {
        v6 = *(_QWORD *)v4;
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_15;
          v6 ^= v4;
        }
        if ( !v6 )
        {
LABEL_15:
          LOBYTE(v3) = 0;
          break;
        }
      }
      else
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_16;
          v6 ^= v4;
        }
        if ( !v6 )
        {
LABEL_16:
          LOBYTE(v3) = 1;
          break;
        }
      }
      v4 = v6;
    }
  }
  RtlRbInsertNodeEx(&xmmword_1800B3EA8, v4, v3, a1 + 32);
  dword_1800B3EA0 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800B3E98);
}
