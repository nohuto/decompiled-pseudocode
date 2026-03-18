/*
 * XREFs of _InitSMSLookaside@0 @ 0x293300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall InitSMSLookaside()
{
  _gsmsList[1] = _gsmsList[0];
  SMSLookaside = (struct _PAGED_LOOKASIDE_LIST *)Win32AllocPagedLookasideList(76, 1634497365, 1836282709, 8);
  return SMSLookaside != 0 ? 0 : -1073741801;
}
