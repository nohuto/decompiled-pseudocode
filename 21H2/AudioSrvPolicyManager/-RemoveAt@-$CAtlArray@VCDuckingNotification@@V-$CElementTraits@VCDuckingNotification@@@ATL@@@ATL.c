/*
 * XREFs of ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180009280
 * Callers:
 *     ??1?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAA@XZ @ 0x180009064 (--1-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAA@XZ.c)
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18000C9D0 (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18000CB94 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x180009888 (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18003A752 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18003AE1B (memmove_0.c)
 */

void *__fastcall ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(
        void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  void *v4; // rsi
  __int64 v5; // r14
  void *result; // rax
  __int64 v7; // rsi
  char *v8; // rbx
  size_t v9; // rsi
  char *v10; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > (unsigned __int64)v4) )
    ATL::AtlThrowImpl(-2147024809);
  v5 = 32 * a2;
  result = (void *)ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(
                     (char *)*a1 + 32 * a2,
                     1LL);
  v7 = (__int64)v4 - v2;
  if ( v7 )
  {
    result = *a1;
    v8 = (char *)*a1 + 32 * v2;
    v9 = 32 * v7;
    v10 = (char *)*a1 + v5;
    if ( v9 )
    {
      if ( !v10 || !v8 )
      {
        *(_DWORD *)_o__errno() = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      result = memmove_0(v10, v8, v9);
    }
  }
  a1[1] = (char *)a1[1] - 1;
  return result;
}
