/*
 * XREFs of ?GetOrUpdateCheckPointIfNotPresent@@YGPAUtagCHECKPOINT@@PAU_MOVESIZEDATA@@@Z @ 0x171112
 * Callers:
 *     ?SizeRect@@YGHPAU_MOVESIZEDATA@@KPAUtagMONITOR@@PAK@Z @ 0x17220B (-SizeRect@@YGHPAU_MOVESIZEDATA@@KPAUtagMONITOR@@PAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

struct tagCHECKPOINT *__thiscall GetOrUpdateCheckPointIfNotPresent(int *this)
{
  struct tagCHECKPOINT *result; // eax
  int v3; // ecx
  int v4[4]; // [esp+Ch] [ebp-14h] BYREF

  memset(v4, 0, sizeof(v4));
  result = (struct tagCHECKPOINT *)_GetProp(this[2], LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
  if ( result || (GetRect(this[2], v4, 66), (result = (struct tagCHECKPOINT *)CkptRestore(this[2], (int)v4)) != 0) )
  {
    v3 = this[46];
    if ( (v3 & 0x1000000) == 0 )
    {
      this[35] = *(_DWORD *)result;
      this[36] = *((_DWORD *)result + 1);
      this[37] = *((_DWORD *)result + 2);
      this[38] = *((_DWORD *)result + 3);
      this[46] = v3 | 0x1000000;
    }
  }
  return result;
}
