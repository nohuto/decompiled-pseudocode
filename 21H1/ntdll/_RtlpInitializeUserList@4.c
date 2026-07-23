/*
 * XREFs of _RtlpInitializeUserList@4 @ 0x4B2D6661
 * Callers:
 *     _RtlSetThreadPreferredUILanguages@12 @ 0x4B2D64B0 (_RtlSetThreadPreferredUILanguages@12.c)
 * Callees:
 *     _RtlpLoadLanguageConfigList@12 @ 0x4B2ACFED (_RtlpLoadLanguageConfigList@12.c)
 *     _InitializeUserOrMachineLangList@20 @ 0x4B2E98CF (_InitializeUserOrMachineLangList@20.c)
 *     _RtlpUpdateTEBLanguage@12 @ 0x4B2EA9DE (_RtlpUpdateTEBLanguage@12.c)
 */

int __thiscall RtlpInitializeUserList(void *this)
{
  int updated; // edx
  struct _TEB *v4; // eax
  int WowTebOffset; // ecx
  struct _TEB *v6; // ecx
  int v7; // edi
  bool v8; // zf
  struct _TEB *v9; // eax
  int v10; // ecx
  void *MuiImpersonation; // eax
  struct _TEB *v12; // eax
  int v13; // ecx
  struct _TEB *v14; // ecx
  int v15; // esi
  struct _TEB *v16; // eax
  int v17; // ecx
  void *v18; // eax
  struct _TEB *v19; // eax
  int v20; // ecx
  struct _TEB *v21; // ecx
  int v22; // esi
  int v23; // ecx
  struct _TEB *v24; // eax
  int v25; // esi
  struct _TEB *v26; // eax
  int v27; // esi
  int v28; // [esp+4h] [ebp-8h] BYREF
  PVOID v29; // [esp+8h] [ebp-4h] BYREF

  updated = 0;
  v28 = 0;
  v29 = 0;
  if ( !NtCurrentTeb()->UserPrefLanguages || !*(_DWORD *)NtCurrentTeb()->UserPrefLanguages )
  {
    if ( this )
    {
      updated = InitializeUserOrMachineLangList(&v28, 3, 0);
      if ( updated >= 0 )
      {
        v4 = NtCurrentTeb();
        WowTebOffset = v4->WowTebOffset;
        if ( WowTebOffset < 0 )
          v4 = (struct _TEB *)((char *)v4 + WowTebOffset);
        v6 = NtCurrentTeb();
        v7 = v6->WowTebOffset;
        if ( v7 < 0 )
          v6 = (struct _TEB *)((char *)v6 + v7);
        v8 = v4 == (struct _TEB *)v6->NtTib.Self;
        v9 = NtCurrentTeb();
        v10 = v9->WowTebOffset;
        if ( v8 )
        {
          if ( v10 < 0 )
            v9 = (struct _TEB *)((char *)v9 + v10);
          MuiImpersonation = (void *)v9->MuiImpersonation;
        }
        else
        {
          if ( v10 < 0 )
            v9 = (struct _TEB *)((char *)v9 + v10);
          MuiImpersonation = v9[1].glDispatchTable[9];
        }
        if ( !MuiImpersonation )
          updated = RtlpLoadLanguageConfigList(8, &v29, (int)this);
        if ( updated >= 0 )
        {
          *(_DWORD *)(v28 + 32) |= 0x10u;
          updated = RtlpUpdateTEBLanguage(4);
          if ( updated >= 0 && v29 )
            updated = RtlpUpdateTEBLanguage(5);
          v12 = NtCurrentTeb();
          v13 = v12->WowTebOffset;
          if ( v13 < 0 )
            v12 = (struct _TEB *)((char *)v12 + v13);
          v14 = NtCurrentTeb();
          v15 = v14->WowTebOffset;
          if ( v15 < 0 )
            v14 = (struct _TEB *)((char *)v14 + v15);
          v8 = v12 == (struct _TEB *)v14->NtTib.Self;
          v16 = NtCurrentTeb();
          v17 = v16->WowTebOffset;
          if ( v8 )
          {
            if ( v17 < 0 )
              v16 = (struct _TEB *)((char *)v16 + v17);
            v18 = (void *)v16->MuiImpersonation;
          }
          else
          {
            if ( v17 < 0 )
              v16 = (struct _TEB *)((char *)v16 + v17);
            v18 = v16[1].glDispatchTable[9];
          }
          if ( !v18 )
          {
            v19 = NtCurrentTeb();
            v20 = v19->WowTebOffset;
            if ( v20 < 0 )
              v19 = (struct _TEB *)((char *)v19 + v20);
            v21 = NtCurrentTeb();
            v22 = v21->WowTebOffset;
            if ( v22 < 0 )
              v21 = (struct _TEB *)((char *)v21 + v22);
            v8 = v19 == (struct _TEB *)v21->NtTib.Self;
            v23 = MEMORY[0x7FFE03A4];
            if ( v8 )
            {
              if ( !MEMORY[0x7FFE03A4] )
                v23 = 1;
              v24 = NtCurrentTeb();
              v25 = v24->WowTebOffset;
              if ( v25 < 0 )
                v24 = (struct _TEB *)((char *)v24 + v25);
              v24->MuiImpersonation = v23;
            }
            else
            {
              if ( !MEMORY[0x7FFE03A4] )
                v23 = 1;
              v26 = NtCurrentTeb();
              v27 = v26->WowTebOffset;
              if ( v27 < 0 )
                v26 = (struct _TEB *)((char *)v26 + v27);
              v26[1].glDispatchTable[9] = (void *)v23;
            }
          }
        }
      }
    }
    else
    {
      return -1073741823;
    }
  }
  return updated;
}
