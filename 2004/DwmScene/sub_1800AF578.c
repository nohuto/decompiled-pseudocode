/*
 * XREFs of sub_1800AF578 @ 0x1800AF578
 * Callers:
 *     sub_1800AED70 @ 0x1800AED70 (sub_1800AED70.c)
 *     sub_1800B01E4 @ 0x1800B01E4 (sub_1800B01E4.c)
 * Callees:
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_signal @ 0x18011FAB6 (_Cnd_signal.c)
 *     _Cnd_wait @ 0x18011FB5C (_Cnd_wait.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800AF578(__int64 a1, _Mtx_t *a2)
{
  int v4; // eax
  int v5; // eax
  char result; // al
  int v7; // eax

  *(_BYTE *)(a1 + 425) = 0;
  *(_BYTE *)(a1 + 424) = 0;
  v4 = Cnd_signal((_Cnd_t)(a1 + 208));
  if ( v4 )
    goto LABEL_9;
  v5 = Cnd_signal((_Cnd_t)(a1 + 280));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
LABEL_8:
    std::_Throw_C_error(v7);
LABEL_9:
    std::_Throw_C_error(v4);
    JUMPOUT(0x1800AF5F9LL);
  }
  while ( 1 )
  {
    result = *(_BYTE *)(a1 + 426);
    if ( result )
      return result;
    v7 = Cnd_wait((_Cnd_t)(a1 + 352), *a2);
    if ( v7 )
      goto LABEL_8;
  }
}
