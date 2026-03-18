/*
 * XREFs of ?VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x1C00126D4
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C0011BF4 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiUpdateFlipTelemetryStats(
        struct _VIDSCH_PROCESS *a1,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a2,
        struct _VIDSCH_PRESENT_INFO *a3)
{
  __int64 v3; // rax

  v3 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v3 == -1 )
  {
    ++*((_QWORD *)a1 + 346);
    ++*((_QWORD *)a3 + 9816);
  }
  else if ( !(_DWORD)v3 || (_DWORD)v3 == *((_DWORD *)a3 + 20682) )
  {
    ++*((_QWORD *)a1 + 344);
    *((_QWORD *)a1 + 348) += v3;
    ++*((_QWORD *)a3 + 9814);
    *((_QWORD *)a3 + 9818) += v3;
  }
  else if ( *((_DWORD *)a3 + 20681) <= 1u )
  {
    ++*((_QWORD *)a1 + 345);
    *((_QWORD *)a1 + 349) += v3;
    ++*((_QWORD *)a3 + 9815);
    *((_QWORD *)a3 + 9819) += v3;
  }
  else
  {
    ++*((_QWORD *)a1 + 347);
    *((_QWORD *)a1 + 351) += v3;
    ++*((_QWORD *)a3 + 9817);
    *((_QWORD *)a3 + 9821) += v3;
  }
}
