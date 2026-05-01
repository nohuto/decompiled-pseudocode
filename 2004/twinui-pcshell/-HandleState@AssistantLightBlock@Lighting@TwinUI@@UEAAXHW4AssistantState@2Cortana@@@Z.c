/*
 * XREFs of ?HandleState@AssistantLightBlock@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z @ 0x180450CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightBlock::HandleState(__int64 a1, int a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = a2;
        if ( v6 == 1 )
        {
          v8 = qword_1805CD990;
          v9 = BlockError;
        }
        else
        {
          v8 = qword_1805CD9A8;
          v9 = BlockIdle;
        }
        goto LABEL_11;
      }
      v8 = qword_1805CD978;
      v9 = BlockResponding;
    }
    else
    {
      v8 = qword_1805CD960;
      v9 = BlockThinking;
    }
  }
  else
  {
    v8 = qword_1805CD948;
    v9 = BlockListening;
  }
  v7 = a2;
LABEL_11:
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 232LL))(
          *(_QWORD *)(a1 + 8),
          *(unsigned int *)(v9 + 4 * (v7 % ((v8 - v9) >> 2))),
          8LL);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightblock.cpp",
      (const char *)(unsigned int)v10);
}
