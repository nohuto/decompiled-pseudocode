/*
 * XREFs of ?GetChromeOptions@ApplicationViewOperation@@UEAAJPEAW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z @ 0x180081180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetChromeOptions(
        ApplicationViewOperation *this,
        enum APPLICATION_FRAME_CHROME_OPTIONS *a2,
        enum APPLICATION_FRAME_CHROME_OPTIONS *a3)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 29);
  *(_DWORD *)a3 = *((_DWORD *)this + 30);
  return *((_DWORD *)this + 29) == 0 ? 0x80070490 : 0;
}
