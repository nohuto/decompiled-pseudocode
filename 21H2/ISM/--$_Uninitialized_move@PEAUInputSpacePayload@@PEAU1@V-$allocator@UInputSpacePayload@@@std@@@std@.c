/*
 * XREFs of ??$_Uninitialized_move@PEAUInputSpacePayload@@PEAU1@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x18012BD0C
 * Callers:
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012AD5C (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInpu.c)
 *     ?_Reallocate_exactly@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAX_K@Z @ 0x18012DDA8 (-_Reallocate_exactly@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@A.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@0AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x18012ACE0 (--$_Destroy_range@V-$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@0AEAV-$.c)
 */

__int64 __fastcall std::_Uninitialized_move<InputSpacePayload *,InputSpacePayload *,std::allocator<InputSpacePayload>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v4; // r8
  __int64 v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 4;
    v5 = a3 - (_QWORD)a1;
    do
    {
      *(_QWORD *)a3 = *(v4 - 4);
      *(_DWORD *)(a3 + 8) = *((_DWORD *)v4 - 6);
      a3 += 40LL;
      *(_QWORD *)((char *)v4 + v5 - 16) = 0LL;
      *(_QWORD *)((char *)v4 + v5 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + v5) = 0LL;
      *(_QWORD *)((char *)v4 + v5 - 16) = *(v4 - 2);
      *(_QWORD *)((char *)v4 + v5 - 8) = *(v4 - 1);
      *(_QWORD *)((char *)v4 + v5) = *v4;
      *(v4 - 2) = 0LL;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4 += 5;
    }
    while ( v4 - 4 != a2 );
  }
  std::_Destroy_range<std::allocator<InputSpacePayload>>((_QWORD *)a3, (_QWORD *)a3);
  return a3;
}
