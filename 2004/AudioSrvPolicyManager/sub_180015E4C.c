/*
 * XREFs of sub_180015E4C @ 0x180015E4C
 * Callers:
 *     sub_1800110E4 @ 0x1800110E4 (sub_1800110E4.c)
 *     sub_180012518 @ 0x180012518 (sub_180012518.c)
 *     sub_18001AFD0 @ 0x18001AFD0 (sub_18001AFD0.c)
 *     sub_18001DA44 @ 0x18001DA44 (sub_18001DA44.c)
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180010A4C @ 0x180010A4C (sub_180010A4C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180015E4C(__int64 a1, int a2)
{
  int v3; // edx
  HRESULT Instance; // edi
  __int64 v5; // rcx
  int v6; // eax

  v3 = a2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( *(_DWORD *)(a1 + 448) )
        return;
      if ( !*(_DWORD *)(a1 + 264) )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 4u )
        {
          sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x31u, &stru_180043390, *(_DWORD *)(a1 + 192));
        }
        if ( !*(_QWORD *)(a1 + 272) )
        {
          Instance = CoCreateInstance(&stru_180045728, 0LL, 1u, &stru_180043348, (LPVOID *)(a1 + 272));
          if ( Instance < 0 )
            goto LABEL_48;
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 272) + 32LL))(
                     *(_QWORD *)(a1 + 272),
                     *(_QWORD *)(a1 + 184),
                     1LL);
        if ( Instance < 0 )
          goto LABEL_48;
        *(_DWORD *)(a1 + 264) = 1;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 264) )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x32u, &stru_180043390, *(_DWORD *)(a1 + 192));
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 40LL))(*(_QWORD *)(a1 + 272));
    if ( Instance == -2147023728 )
      Instance = 0;
    if ( Instance < 0 )
      goto LABEL_48;
    *(_DWORD *)(a1 + 264) = 0;
  }
  v5 = *(_QWORD *)(a1 + 256);
  if ( v5 )
  {
    v6 = sub_180010A4C(v5);
  }
  else if ( *(_DWORD *)(a1 + 512) )
  {
    v6 = *(_DWORD *)(a1 + 516);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 344);
  }
  if ( v6 || !*(_DWORD *)(a1 + 468) )
  {
    if ( !*(_DWORD *)(a1 + 268) )
      return;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x34u, &stru_180043390, *(_DWORD *)(a1 + 192));
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 40LL))(*(_QWORD *)(a1 + 280));
    if ( Instance == -2147023728 )
      Instance = 0;
    if ( Instance >= 0 )
    {
      *(_DWORD *)(a1 + 268) = 0;
      return;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 268) )
      return;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x33u, &stru_180043390, *(_DWORD *)(a1 + 192));
    }
    if ( *(_QWORD *)(a1 + 280)
      || (Instance = CoCreateInstance(&stru_180045728, 0LL, 1u, &stru_180043348, (LPVOID *)(a1 + 280)), Instance >= 0) )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 280) + 32LL))(
                   *(_QWORD *)(a1 + 280),
                   *(_QWORD *)(a1 + 184),
                   0x80000LL);
      if ( Instance >= 0 )
      {
        *(_DWORD *)(a1 + 268) = 1;
        return;
      }
    }
  }
LABEL_48:
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 2u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x35u, &stru_180043390, Instance);
  }
  sub_180005724("CProcess::NotifyPLM", 3727, Instance);
}
