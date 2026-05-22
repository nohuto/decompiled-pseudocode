/*
 * XREFs of ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x18008944C
 * Callers:
 *     ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ @ 0x180088A24 (-GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x18009F6E0 (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x18017E318 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QpcTimeConverter::QpcToMicroSec(QpcTimeConverter *this, unsigned __int64 a2, unsigned __int64 *a3)
{
  if ( *(_QWORD *)this )
  {
    *a3 = *((_QWORD *)this + 1) * (a2 / *(_QWORD *)this)
        + *((_QWORD *)this + 1) * (a2 - *(_QWORD *)this * (a2 / *(_QWORD *)this)) / *(_QWORD *)this;
    return 1LL;
  }
  else
  {
    *a3 = 0LL;
    return 0LL;
  }
}
