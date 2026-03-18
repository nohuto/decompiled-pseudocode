/*
 * XREFs of InkProcessorIsInkDevice @ 0x1C00F7FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@InkProcessor@@QEBA_NXZ @ 0x1C00F8070 (-IsEnabled@InkProcessor@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

__int64 __fastcall InkProcessorIsInkDevice(__int16 a1, __int16 a2, _WORD *a3, _WORD *a4)
{
  unsigned int v5; // ebx
  int v10; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+38h] [rbp-40h] BYREF
  int *v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v5 = 0;
  if ( InkProcessor::s_pInstance )
  {
    if ( InkProcessor::IsEnabled(InkProcessor::s_pInstance)
      && a1 == -241
      && a2 == 256
      && (!a3 || *a3 == 1118)
      && (!a4 || *a4 == 85) )
    {
      return 1;
    }
  }
  else if ( (unsigned int)dword_1C032A288 > 2 )
  {
    v10 = -1073741823;
    v12 = &v10;
    v13 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032A288, (int)&dword_1C02F0A0C, 0, 0, 3u, &v11);
  }
  return v5;
}
