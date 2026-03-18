/*
 * XREFs of ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180025DCC
 * Callers:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x180025D28 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180037EF0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18007B290 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B32C8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RemoveLight(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  bool v4; // r14
  char *v7; // rcx
  char *v8; // r8
  _QWORD *i; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx

  v3 = 0;
  v4 = 0;
  if ( a3 )
  {
    for ( i = (_QWORD *)a1[37]; i != (_QWORD *)a1[38]; i += 2 )
    {
      if ( *i == a2 )
      {
        v11 = (_QWORD *)a1[34];
        v12 = (_QWORD *)a1[35];
        while ( v11 != v12 )
        {
          if ( *v11 == a2 )
          {
            Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a2 + 24));
            v15 = CPtrArrayBase::InsertAt(v14, (unsigned __int64)a1, Count);
            v3 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x4D1u, 0LL);
              return v3;
            }
            v4 = 1;
            break;
          }
          v11 += 2;
        }
        memmove_0(i, i + 2, a1[38] - (_QWORD)(i + 2));
        a1[38] -= 16LL;
LABEL_6:
        if ( v4 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 5LL);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 1LL);
        }
        return v3;
      }
    }
  }
  else
  {
    v7 = (char *)a1[34];
    v8 = (char *)a1[35];
    while ( v7 != v8 )
    {
      if ( *(_QWORD *)v7 == a2 )
      {
        memmove_0(v7, v7 + 16, v8 - (v7 + 16));
        a1[35] -= 16LL;
        v4 = CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1);
        goto LABEL_6;
      }
      v7 += 16;
    }
  }
  return v3;
}
