/*
 * XREFs of ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x180234008
 * Callers:
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180235D70 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152D40 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180224D1C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1802353B0 (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 */

void __fastcall CManipulationContext::CleanStaleFork(__int64 a1, int a2, _BYTE *a3)
{
  _BYTE *v3; // rbx
  __int64 v4; // rdi
  _BYTE *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  int v10; // [rsp+30h] [rbp-59h] BYREF
  _BYTE *v11; // [rsp+38h] [rbp-51h] BYREF
  _BYTE *v12; // [rsp+40h] [rbp-49h] BYREF
  __int64 v13; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  _QWORD *v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  _QWORD *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  int *v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+ACh] [rbp+23h]

  if ( a3 )
  {
    v3 = a3;
    v4 = a2;
    do
    {
      if ( (v3[184] & 0x40) != 0 )
        break;
      v6 = (_BYTE *)*((_QWORD *)v3 + 25);
      if ( (unsigned int)dword_180344EF0 > 4 && (qword_180344F00 & 2) != 0 && (qword_180344F08 & 2) == qword_180344F08 )
      {
        v7 = v4 - 1;
        if ( (unsigned int)(v4 - 1) >= 6 )
          v7 = 0LL;
        v8 = *(_DWORD *)&v3[4 * v7 + 240];
        v26 = 0;
        v23 = 0;
        v20 = 0;
        v17 = 0;
        v10 = v8;
        v24 = &v10;
        v21 = &v11;
        v18 = &v12;
        v15 = &v13;
        v11 = v6;
        v12 = v3;
        v13 = a1;
        v25 = 4;
        v22 = 8;
        v19 = 8;
        v16 = 8;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_180344EF0,
          (unsigned __int8 *)dword_1802ED415,
          0LL,
          0LL,
          6u,
          &v14);
      }
      (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, (unsigned int)v4);
      v9 = v4 - 1;
      if ( (unsigned int)(v4 - 1) >= 6 )
        v9 = 0LL;
      --*(_DWORD *)&v3[4 * v9 + 240];
      if ( !(unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v3) )
        CManipulationContext::RemoveInteractionLeafFromTree((struct CInteraction *)v3);
      v3[184] &= ~0x80u;
      v3 = v6;
    }
    while ( v6 );
  }
}
