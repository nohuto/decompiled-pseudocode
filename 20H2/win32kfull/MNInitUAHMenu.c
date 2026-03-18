/*
 * XREFs of MNInitUAHMenu @ 0x1C0033C68
 * Callers:
 *     xxxSendUAHInitMenuMessage @ 0x1C00334D0 (xxxSendUAHInitMenuMessage.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0033A54 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0036B18 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     xxxSendUAHMenuMessage @ 0x1C00FB170 (xxxSendUAHMenuMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNInitUAHMenu(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = 0LL;
  if ( a1 )
    v3 = *a1;
  *(_QWORD *)a3 = v3;
  *(_QWORD *)(a3 + 8) = a2;
  result = a1[5];
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(result + 40);
  return result;
}
