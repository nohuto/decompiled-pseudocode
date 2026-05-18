/*
 * XREFs of sub_1800265A4 @ 0x1800265A4
 * Callers:
 *     sub_18002A260 @ 0x18002A260 (sub_18002A260.c)
 *     sub_18002ADC0 @ 0x18002ADC0 (sub_18002ADC0.c)
 *     sub_18002B270 @ 0x18002B270 (sub_18002B270.c)
 *     sub_18002C8D0 @ 0x18002C8D0 (sub_18002C8D0.c)
 *     sub_18002CC84 @ 0x18002CC84 (sub_18002CC84.c)
 *     sub_18002ED04 @ 0x18002ED04 (sub_18002ED04.c)
 *     sub_18002F578 @ 0x18002F578 (sub_18002F578.c)
 *     sub_18002FB34 @ 0x18002FB34 (sub_18002FB34.c)
 *     sub_18002FE38 @ 0x18002FE38 (sub_18002FE38.c)
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_180030E0C @ 0x180030E0C (sub_180030E0C.c)
 *     sub_180033220 @ 0x180033220 (sub_180033220.c)
 *     sub_180033650 @ 0x180033650 (sub_180033650.c)
 *     sub_180033A54 @ 0x180033A54 (sub_180033A54.c)
 *     sub_180034B50 @ 0x180034B50 (sub_180034B50.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_180037A70 @ 0x180037A70 (sub_180037A70.c)
 *     sub_180038450 @ 0x180038450 (sub_180038450.c)
 *     sub_180038780 @ 0x180038780 (sub_180038780.c)
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     _setlocale_set_cat @ 0x18003A1F0 (_setlocale_set_cat.c)
 *     sub_18003A5A8 @ 0x18003A5A8 (sub_18003A5A8.c)
 *     sub_18003D310 @ 0x18003D310 (sub_18003D310.c)
 *     sub_18003D8B0 @ 0x18003D8B0 (sub_18003D8B0.c)
 *     sub_180040870 @ 0x180040870 (sub_180040870.c)
 *     sub_1800410CC @ 0x1800410CC (sub_1800410CC.c)
 *     sub_180041DB0 @ 0x180041DB0 (sub_180041DB0.c)
 *     sub_180042180 @ 0x180042180 (sub_180042180.c)
 *     sub_180042520 @ 0x180042520 (sub_180042520.c)
 *     sub_1800428C0 @ 0x1800428C0 (sub_1800428C0.c)
 *     sub_180042D80 @ 0x180042D80 (sub_180042D80.c)
 *     sub_180043080 @ 0x180043080 (sub_180043080.c)
 *     sub_180043350 @ 0x180043350 (sub_180043350.c)
 *     sub_180043798 @ 0x180043798 (sub_180043798.c)
 *     sub_180043904 @ 0x180043904 (sub_180043904.c)
 * Callees:
 *     sub_1800248B4 @ 0x1800248B4 (sub_1800248B4.c)
 *     sub_180024984 @ 0x180024984 (sub_180024984.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800265A4(__int64 a1, int a2)
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
                sub_1801163DC(
                  &unk_180208020,
                  3LL,
                  "ValidateDeviceAPICAll: Device removed because of invalid call. Likely error in our code.");
                break;
              case -2005270523:
                *(_DWORD *)(a1 + 4248) = 2;
                sub_1801163DC(
                  &unk_180208020,
                  3LL,
                  "ValidateDeviceAPICAll: Device removed. Possibly because new drivers were installed?");
                break;
              case -2005270522:
                *(_DWORD *)(a1 + 4248) = 1;
                sub_1801163DC(&unk_180208020, 3LL, "ValidateDeviceAPICAll: Device removed because it hung.");
                break;
              case -2005270521:
                *(_DWORD *)(a1 + 4248) = 3;
                sub_1801163DC(&unk_180208020, 3LL, "ValidateDeviceAPICAll: Device removed because it was reset.");
                break;
              case -2005270496:
                *(_DWORD *)(a1 + 4248) = 4;
                sub_1801163DC(
                  &unk_180208020,
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
                  sub_1801163DC(
                    &unk_180208020,
                    3LL,
                    "ValidateDeviceAPICAll: Device removed but reason was S_OK. Better device now available?");
                }
                break;
            }
          }
          else
          {
            *(_DWORD *)(a1 + 4248) = 2;
            sub_1801163DC(
              &unk_180208020,
              3LL,
              "ValidateDeviceAPICAll: Device removed and is now null so cannot be queried. Serious error.");
          }
          break;
        case -2005270521:
          *(_DWORD *)(a1 + 4248) = 3;
          sub_1801163DC(&unk_180208020, 3LL, "ValidateDeviceAPICAll: Device was reset.");
          break;
        case -2147024882:
          sub_1801163DC(&unk_180208020, 3LL, "ValidateDeviceAPICAll: Device out of memory. Calling OOM callbacks.");
          sub_180024984(a1);
          break;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4248) = 0;
    }
    if ( *(_DWORD *)(a1 + 4248) )
    {
      sub_1801163DC(&unk_180208020, 3LL, "ValidateDeviceAPICAll: Calling Device-lost callback to notify clients.");
      sub_1800248B4(a1);
    }
  }
}
