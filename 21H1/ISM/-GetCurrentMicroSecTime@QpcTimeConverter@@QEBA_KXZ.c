/*
 * XREFs of ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ @ 0x180088A24
 * Callers:
 *     ?ShellButtonRepeatCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x180041250 (-ShellButtonRepeatCallback@GameControllerRawInputProvider@@CAJPEAX@Z.c)
 *     ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x180089554 (-SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x18008944C (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 */

unsigned __int64 __fastcall QpcTimeConverter::GetCurrentMicroSecTime(QpcTimeConverter *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  PerformanceCount.QuadPart = (LONGLONG)this;
  if ( QueryPerformanceCounter(&PerformanceCount)
    && (unsigned int)QpcTimeConverter::QpcToMicroSec(
                       (QpcTimeConverter *)&GameControllerRawInputProvider::s_qpcTime,
                       PerformanceCount.QuadPart,
                       &v3) )
  {
    return v3;
  }
  else
  {
    return 1000LL * GetTickCount();
  }
}
