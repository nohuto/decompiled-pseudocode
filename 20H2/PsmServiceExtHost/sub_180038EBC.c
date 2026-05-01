/*
 * XREFs of sub_180038EBC @ 0x180038EBC
 * Callers:
 *     sub_180038AA0 @ 0x180038AA0 (sub_180038AA0.c)
 *     sub_180066550 @ 0x180066550 (sub_180066550.c)
 * Callees:
 *     sub_180038FF0 @ 0x180038FF0 (sub_180038FF0.c)
 *     sub_18003A0E8 @ 0x18003A0E8 (sub_18003A0E8.c)
 *     sub_18003A3E4 @ 0x18003A3E4 (sub_18003A3E4.c)
 */

bool __fastcall sub_180038EBC(int a1, int a2, unsigned __int8 a3, int a4, __int64 a5)
{
  int v5; // ebp
  volatile __int32 *v7; // rbx
  int v10; // edi
  bool v11; // si
  char v12; // cl
  int v14; // [rsp+30h] [rbp-28h] BYREF
  volatile __int32 *v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&unk_1800B4290;
  if ( a4 )
    v7 = (volatile __int32 *)&unk_1800B5038;
  if ( (*v7 & 1) != 0 )
    return (*v7 & 8) != 0 && (unsigned int)sub_18003A3E4(a1, a2, a3, a4, 0LL, a5) != 0;
  v10 = dword_1800B4144;
  v16 = 1;
  if ( !dword_1800B4144 )
    v10 = sub_180038FF0(&byte_1800B4128);
  v11 = (unsigned int)sub_18003A3E4(a1, a2, v5, a4, (__int64)&v16, a5) != 0;
  v12 = _InterlockedExchange(v7, v16 != 0 ? 11 : 3);
  if ( !v16 && (v12 & 2) == 0 && byte_1800B4128 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !v10
      || v10 != dword_1800B4144
      || (v14 = 0, v15 = v7, !(unsigned __int8)sub_18003A0E8(&xmmword_1800B4178, &v14, 16LL)) )
    {
      _InterlockedAnd(v7, 0xFFFFFDF8);
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
  return v11;
}
