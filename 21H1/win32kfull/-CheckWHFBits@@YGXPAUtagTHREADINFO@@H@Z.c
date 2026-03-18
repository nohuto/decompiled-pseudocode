/*
 * XREFs of ?CheckWHFBits@@YGXPAUtagTHREADINFO@@H@Z @ 0x12872
 * Callers:
 *     _FreeHook@4 @ 0x12EC8 (_FreeHook@4.c)
 * Callees:
 *     _PhkFirstValid@8 @ 0x12974 (_PhkFirstValid@8.c)
 *     _PhkFirstGlobalValid@8 @ 0x6F434 (_PhkFirstGlobalValid@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __fastcall CheckWHFBits(int a1, char a2)
{
  int v3; // edi
  int Valid; // eax
  PRKPROCESS *v5; // edi
  int v6; // [esp+18h] [ebp-24h]
  BOOL v8; // [esp+20h] [ebp-1Ch]

  v3 = 1;
  v8 = 1;
  Valid = PhkFirstValid();
  if ( Valid )
  {
    if ( (*(_BYTE *)(Valid + 32) & 1) != 0 )
    {
      v8 = 0;
    }
    else
    {
      v3 = 0;
      v8 = PhkFirstGlobalValid(a1) == 0;
    }
  }
  if ( v3 )
  {
    *(_DWORD *)(a1 + 372) &= ~(1 << (a2 + 1));
    if ( *(_DWORD *)(a1 + 260) )
    {
      v5 = *(PRKPROCESS **)(a1 + 232);
      if ( v5 == (PRKPROCESS *)PsGetCurrentProcessWin32Process() )
      {
        v6 = 0;
      }
      else
      {
        KeAttachProcess(*v5);
        v6 = 1;
      }
      *(_DWORD *)(*(_DWORD *)(a1 + 260) + 36) = *(_DWORD *)(a1 + 372);
      if ( v6 )
        KeDetachProcess();
    }
  }
  if ( v8 )
    *(_DWORD *)(**(_DWORD **)(a1 + 252) + 8) &= ~(1 << (a2 + 1));
}
