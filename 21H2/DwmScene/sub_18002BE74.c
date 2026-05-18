/*
 * XREFs of sub_18002BE74 @ 0x18002BE74
 * Callers:
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 *     sub_180030690 @ 0x180030690 (sub_180030690.c)
 *     sub_180030B40 @ 0x180030B40 (sub_180030B40.c)
 *     sub_1800321A0 @ 0x1800321A0 (sub_1800321A0.c)
 *     sub_180032554 @ 0x180032554 (sub_180032554.c)
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 *     sub_180034E48 @ 0x180034E48 (sub_180034E48.c)
 *     sub_180035404 @ 0x180035404 (sub_180035404.c)
 *     sub_180035708 @ 0x180035708 (sub_180035708.c)
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_1800366DC @ 0x1800366DC (sub_1800366DC.c)
 *     sub_180038AF0 @ 0x180038AF0 (sub_180038AF0.c)
 *     sub_180038F20 @ 0x180038F20 (sub_180038F20.c)
 *     sub_180039324 @ 0x180039324 (sub_180039324.c)
 *     sub_18003A420 @ 0x18003A420 (sub_18003A420.c)
 *     sub_18003CAC0 @ 0x18003CAC0 (sub_18003CAC0.c)
 *     sub_18003D340 @ 0x18003D340 (sub_18003D340.c)
 *     sub_18003DD20 @ 0x18003DD20 (sub_18003DD20.c)
 *     sub_18003E050 @ 0x18003E050 (sub_18003E050.c)
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 *     _setlocale_set_cat @ 0x18003FAC0 (_setlocale_set_cat.c)
 *     sub_18003FE78 @ 0x18003FE78 (sub_18003FE78.c)
 *     sub_180042BE0 @ 0x180042BE0 (sub_180042BE0.c)
 *     sub_180043180 @ 0x180043180 (sub_180043180.c)
 *     sub_180046140 @ 0x180046140 (sub_180046140.c)
 *     sub_18004699C @ 0x18004699C (sub_18004699C.c)
 *     sub_180047680 @ 0x180047680 (sub_180047680.c)
 *     sub_180047A50 @ 0x180047A50 (sub_180047A50.c)
 *     sub_180047DF0 @ 0x180047DF0 (sub_180047DF0.c)
 *     sub_180048190 @ 0x180048190 (sub_180048190.c)
 *     sub_180048650 @ 0x180048650 (sub_180048650.c)
 *     sub_180048950 @ 0x180048950 (sub_180048950.c)
 *     sub_180048C20 @ 0x180048C20 (sub_180048C20.c)
 *     sub_180049068 @ 0x180049068 (sub_180049068.c)
 *     sub_1800491D4 @ 0x1800491D4 (sub_1800491D4.c)
 * Callees:
 *     sub_18002A184 @ 0x18002A184 (sub_18002A184.c)
 *     sub_18002A254 @ 0x18002A254 (sub_18002A254.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18002BE74(__int64 a1, int a2)
{
  __int64 v3; // rcx
  int v4; // eax

  if ( !*(_DWORD *)(a1 + 4248) )
  {
    *(_DWORD *)(a1 + 4252) = a2;
    if ( a2 )
    {
      switch ( a2 )
      {
        case -2005270523:
          v3 = *(_QWORD *)(a1 + 4256);
          if ( v3 )
          {
            v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 312LL))(v3);
            switch ( v4 )
            {
              case -2005270527:
                *(_DWORD *)(a1 + 4248) = 5;
                sub_18011BCAC(
                  &unk_18020F098,
                  3LL,
                  "ValidateDeviceAPICAll: Device removed because of invalid call. Likely error in our code.");
                break;
              case -2005270523:
                *(_DWORD *)(a1 + 4248) = 2;
                sub_18011BCAC(
                  &unk_18020F098,
                  3LL,
                  "ValidateDeviceAPICAll: Device removed. Possibly because new drivers were installed?");
                break;
              case -2005270522:
                *(_DWORD *)(a1 + 4248) = 1;
                sub_18011BCAC(&unk_18020F098, 3LL, "ValidateDeviceAPICAll: Device removed because it hung.");
                break;
              case -2005270521:
                *(_DWORD *)(a1 + 4248) = 3;
                sub_18011BCAC(&unk_18020F098, 3LL, "ValidateDeviceAPICAll: Device removed because it was reset.");
                break;
              case -2005270496:
                *(_DWORD *)(a1 + 4248) = 4;
                sub_18011BCAC(
                  &unk_18020F098,
                  3LL,
                  "ValidateDeviceAPICAll: Device removed because of driver internal error.");
                break;
              default:
                if ( v4 )
                {
                  *(_DWORD *)(a1 + 4248) = 2;
                }
                else
                {
                  *(_DWORD *)(a1 + 4248) = 0;
                  sub_18011BCAC(
                    &unk_18020F098,
                    3LL,
                    "ValidateDeviceAPICAll: Device removed but reason was S_OK. Better device now available?");
                }
                break;
            }
          }
          else
          {
            *(_DWORD *)(a1 + 4248) = 2;
            sub_18011BCAC(
              &unk_18020F098,
              3LL,
              "ValidateDeviceAPICAll: Device removed and is now null so cannot be queried. Serious error.");
          }
          break;
        case -2005270521:
          *(_DWORD *)(a1 + 4248) = 3;
          sub_18011BCAC(&unk_18020F098, 3LL, "ValidateDeviceAPICAll: Device was reset.");
          break;
        case -2147024882:
          sub_18011BCAC(&unk_18020F098, 3LL, "ValidateDeviceAPICAll: Device out of memory. Calling OOM callbacks.");
          sub_18002A254(a1);
          break;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4248) = 0;
    }
    if ( *(_DWORD *)(a1 + 4248) )
    {
      sub_18011BCAC(&unk_18020F098, 3LL, "ValidateDeviceAPICAll: Calling Device-lost callback to notify clients.");
      sub_18002A184(a1);
    }
  }
}
