/*
 * XREFs of sub_18002880C @ 0x18002880C
 * Callers:
 *     sub_180006EA0 @ 0x180006EA0 (sub_180006EA0.c)
 *     sub_180007520 @ 0x180007520 (sub_180007520.c)
 *     sub_180007840 @ 0x180007840 (sub_180007840.c)
 *     sub_180008690 @ 0x180008690 (sub_180008690.c)
 *     sub_18000ABD0 @ 0x18000ABD0 (sub_18000ABD0.c)
 *     sub_180016AF0 @ 0x180016AF0 (sub_180016AF0.c)
 *     sub_18001E14C @ 0x18001E14C (sub_18001E14C.c)
 *     sub_18001F000 @ 0x18001F000 (sub_18001F000.c)
 *     sub_18001FFCC @ 0x18001FFCC (sub_18001FFCC.c)
 *     sub_1800201E0 @ 0x1800201E0 (sub_1800201E0.c)
 *     sub_180024994 @ 0x180024994 (sub_180024994.c)
 *     sub_180024E60 @ 0x180024E60 (sub_180024E60.c)
 *     sub_180026A18 @ 0x180026A18 (sub_180026A18.c)
 *     sub_180028944 @ 0x180028944 (sub_180028944.c)
 *     sub_180028AD8 @ 0x180028AD8 (sub_180028AD8.c)
 *     sub_180028B58 @ 0x180028B58 (sub_180028B58.c)
 *     sub_180028C94 @ 0x180028C94 (sub_180028C94.c)
 *     sub_180028D80 @ 0x180028D80 (sub_180028D80.c)
 *     sub_180028F50 @ 0x180028F50 (sub_180028F50.c)
 *     sub_180029028 @ 0x180029028 (sub_180029028.c)
 *     sub_1800290D8 @ 0x1800290D8 (sub_1800290D8.c)
 *     sub_1800292E8 @ 0x1800292E8 (sub_1800292E8.c)
 *     sub_1800293D4 @ 0x1800293D4 (sub_1800293D4.c)
 *     sub_1800295AC @ 0x1800295AC (sub_1800295AC.c)
 *     sub_180029670 @ 0x180029670 (sub_180029670.c)
 *     sub_18002975C @ 0x18002975C (sub_18002975C.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_1800298F4 @ 0x1800298F4 (sub_1800298F4.c)
 *     sub_180029AAC @ 0x180029AAC (sub_180029AAC.c)
 *     sub_180029CD0 @ 0x180029CD0 (sub_180029CD0.c)
 *     sub_180029FD4 @ 0x180029FD4 (sub_180029FD4.c)
 *     sub_18002A1BC @ 0x18002A1BC (sub_18002A1BC.c)
 *     sub_18002A3EC @ 0x18002A3EC (sub_18002A3EC.c)
 *     sub_18002A46C @ 0x18002A46C (sub_18002A46C.c)
 *     sub_18002A4F8 @ 0x18002A4F8 (sub_18002A4F8.c)
 *     TS_SessionChanged @ 0x18002A7F0 (TS_SessionChanged.c)
 *     sub_18002AA88 @ 0x18002AA88 (sub_18002AA88.c)
 *     sub_18002AB9C @ 0x18002AB9C (sub_18002AB9C.c)
 * Callees:
 *     sub_180027B9C @ 0x180027B9C (sub_180027B9C.c)
 */

__int64 __fastcall sub_18002880C(DWORD SessionId, int a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _DWORD *v10; // rcx
  __int64 result; // rax

  if ( a3 )
    *a3 = 0LL;
  *a4 = 0LL;
  EnterCriticalSection(&CriticalSection);
  v8 = (_QWORD *)qword_18004FF98;
  while ( 1 )
  {
    v9 = v8;
    if ( !v8 )
      break;
    v10 = (_DWORD *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( SessionId == *v10 )
    {
      if ( a3 )
        *a3 = v9;
      *a4 = v10;
      break;
    }
  }
  LeaveCriticalSection(&CriticalSection);
  result = *a4 == 0LL ? 0x490 : 0;
  if ( !*a4 )
  {
    if ( a2 )
      return sub_180027B9C(SessionId, a3, a4);
  }
  return result;
}
