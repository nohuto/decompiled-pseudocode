/*
 * XREFs of SdbpFindFirstIndexedWildCardTag @ 0x140743DD8
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140744058 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14076BC10 (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     AslStringPatternMatchW @ 0x140740240 (AslStringPatternMatchW.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140740BD0 (SdbGetStringTagPtr.c)
 *     AslStringPatternMatchA @ 0x140743F5C (AslStringPatternMatchA.c)
 *     SdbpKeyToAnsiString @ 0x140744028 (SdbpKeyToAnsiString.c)
 *     SdbpGetIndex @ 0x1407441E4 (SdbpGetIndex.c)
 *     SdbFindFirstTag @ 0x1407447D4 (SdbFindFirstTag.c)
 *     SdbGetIndex @ 0x140744C64 (SdbGetIndex.c)
 *     AslStringUpcaseToMultiByteN @ 0x140744DC4 (AslStringUpcaseToMultiByteN.c)
 */

__int64 __fastcall SdbpFindFirstIndexedWildCardTag(void *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int Index; // eax
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // rdi
  unsigned int v13; // esi
  unsigned int FirstTag; // eax
  unsigned __int16 *StringTagPtr; // rax
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v18; // [rsp+40h] [rbp-C0h]
  _BYTE v19[272]; // [rsp+50h] [rbp-B0h] BYREF

  v16 = 0;
  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = 24587;
  *((_QWORD *)a5 + 4) = a4;
  memset(v19, 0, 0x104uLL);
  v17 = 0LL;
  v18 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v19, v8, a4) < 0 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v9 = SdbpGetIndex(a1, *a5, &v16);
  if ( !v9 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v10 = v16;
  v11 = 0LL;
  if ( !v16 )
    return 0LL;
  while ( 1 )
  {
    SdbpKeyToAnsiString(*(_QWORD *)(v9 + 12 * v11), &v17);
    LOBYTE(v18) = 42;
    if ( (unsigned int)AslStringPatternMatchA(&v17, v19) )
    {
      v13 = *(_DWORD *)(v9 + 12 * v11 + 8);
      FirstTag = SdbFindFirstTag(a1, v13, *((unsigned __int16 *)a5 + 6));
      if ( FirstTag )
      {
        StringTagPtr = (unsigned __int16 *)SdbGetStringTagPtr((__int64)a1, FirstTag);
        if ( StringTagPtr )
        {
          if ( (unsigned int)AslStringPatternMatchW(StringTagPtr, *((unsigned __int16 **)a5 + 4)) )
            break;
        }
      }
    }
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v10 )
      return 0LL;
  }
  a5[4] = v11;
  return v13;
}
