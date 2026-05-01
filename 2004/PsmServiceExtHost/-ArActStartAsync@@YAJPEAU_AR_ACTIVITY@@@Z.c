/*
 * XREFs of ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18008415C
 * Callers:
 *     ?ArActRestart@@YAJPEAU_AR_ACTIVITY@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x180084130 (-ArActRestart@@YAJPEAU_AR_ACTIVITY@@W4_AR_STATE_CHANGE_EVENT@@@Z.c)
 *     ?ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008431C (-ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArActStartAsync(struct _AR_ACTIVITY *a1)
{
  __int64 result; // rax

  result = HamStartActivityAsync(
             *(_QWORD *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 72),
             *((_QWORD *)a1 + 5),
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    *((_BYTE *)a1 + 52) = 1;
    return 0LL;
  }
  return result;
}
