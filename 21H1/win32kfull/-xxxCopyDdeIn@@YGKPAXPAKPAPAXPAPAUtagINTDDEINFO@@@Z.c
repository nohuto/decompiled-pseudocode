/*
 * XREFs of ?xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z @ 0x17F478
 * Callers:
 *     ?xxxAdvise@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17ED57 (-xxxAdvise@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EEED (-xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z @ 0x17F2E7 (-xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z.c)
 *     ?xxxExecute@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F55E (-xxxExecute@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F68D (-xxxExecuteAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F882 (-xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5 (-xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_sqq@32 @ 0x1ADA0 (_WPP_RECORDER_SF_sqq@32.c)
 *     _WPP_RECORDER_SF_qqq@32 @ 0x350A8 (_WPP_RECORDER_SF_qqq@32.c)
 *     _xxxClientCopyDDEIn1@12 @ 0x193B53 (_xxxClientCopyDDEIn1@12.c)
 */

int __userpurge xxxCopyDdeIn@<eax>(
        _DWORD *a1@<edx>,
        char a2@<cl>,
        _DWORD *a3,
        unsigned int *a4,
        void **a5,
        struct tagINTDDEINFO **a6)
{
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // esi
  int v11; // edi
  int v12; // ecx
  const char *v13; // eax

  v7 = xxxClientCopyDDEIn1(a4);
  v10 = (_DWORD *)*a4;
  v11 = v7;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v10 )
      v12 = v10[3];
    else
      LOBYTE(v12) = 0;
    v13 = "and freeing";
    if ( (*a1 & 0x1000) == 0 )
      v13 = byte_FC858;
    WPP_RECORDER_SF_sqq(0xEu, 58, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, v13, a2, v12);
  }
  if ( v11 == 2 )
  {
    *a1 = v10[2];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qqq(v9, v8, 0xEu, 59, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, *v10, v10[1], v10[3]);
    }
    if ( a3 )
      *a3 = v10[3];
  }
  return v11;
}
