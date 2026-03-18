/*
 * XREFs of _ForwardTouchMessage@36 @ 0x149C25
 * Callers:
 *     _NtUserPostMessage@16 @ 0x6D25E (_NtUserPostMessage@16.c)
 *     _NtUserfnTOUCH@28 @ 0x16D56B (_NtUserfnTOUCH@28.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?CreateValidTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IIQAUtagTOUCHINPUT@@@Z @ 0x149228 (-CreateValidTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IIQAUtagTOUCHINPUT@@@Z.c)
 *     __FreeTouchInputInfo@8 @ 0x149EED (__FreeTouchInputInfo@8.c)
 *     __PostMessageCheckIL@20 @ 0x14EADF (__PostMessageCheckIL@20.c)
 */

int __fastcall ForwardTouchMessage(
        int a1,
        int a2,
        int a3,
        struct tagTHREADINFO *a4,
        volatile void *Address,
        int a6,
        int a7,
        unsigned int a8,
        _DWORD *a9)
{
  struct HTOUCHINPUT__ *ValidTouchInputInfo; // eax
  int v11; // esi
  unsigned int v12; // edi
  unsigned int v14; // [esp+0h] [ebp-34h]
  struct tagTOUCHINPUT *v15; // [esp+4h] [ebp-30h]
  struct HTOUCHINPUT__ *Addressa; // [esp+44h] [ebp+10h]

  if ( !a2 || a2 == -1 || !Address || !a4 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  if ( (unsigned int)a4 > 0x6666666 )
    ExRaiseAccessViolation();
  ProbeForRead(Address, 40 * (_DWORD)a4, 1u);
  ValidTouchInputInfo = CreateValidTouchInputInfo(a1, a4, (unsigned int)Address, v14, v15);
  Addressa = ValidTouchInputInfo;
  if ( !ValidTouchInputInfo )
    return 0;
  if ( a6 )
  {
    v11 = _PostMessageCheckIL(a2, a3, a4, ValidTouchInputInfo, ValidTouchInputInfo);
    v12 = a8;
  }
  else
  {
    v12 = a8;
    *a9 = ((int (__stdcall *)(int, int, struct tagTHREADINFO *, struct HTOUCHINPUT__ *, int))mpFnidPfn[((_BYTE)a8 + 6) & 0x1F])(
            a2,
            a3,
            a4,
            ValidTouchInputInfo,
            a7);
    v11 = 1;
  }
  if ( !v11 || v12 >= 0x2AB && (v12 <= 0x2AC || v12 == 692) )
    _FreeTouchInputInfo(Addressa, 1);
  return v11;
}
