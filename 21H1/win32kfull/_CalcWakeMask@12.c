/*
 * XREFs of _CalcWakeMask@12 @ 0x69C20
 * Callers:
 *     _AdjustPwndPtiPqForDelegation@24 @ 0x47910 (_AdjustPwndPtiPqForDelegation@24.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     ?CheckCrossThreadInput@@YGHQAUtagWND@@PAUtagQMSG@@PAH2PAPAU2@@Z @ 0x9C586 (-CheckCrossThreadInput@@YGHQAUtagWND@@PAUtagQMSG@@PAH2PAPAU2@@Z.c)
 *     _TransferWakeBit@8 @ 0xA255A (_TransferWakeBit@8.c)
 * Callees:
 *     <none>
 */

int __fastcall CalcWakeMask(unsigned int a1, unsigned int a2, int a3)
{
  int result; // eax

  result = a3;
  if ( a3 )
  {
    if ( (a3 & 0x1C07) != 0 )
      result = a3 | 0x3C07;
    if ( (result & 0x98) != 0 )
      result |= 0x98u;
  }
  else
  {
    result = 15871;
  }
  if ( a1 || a2 != -1 )
  {
    result &= ~0x100u;
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 > 0xA0 || a1 < 0xA0 )
          goto LABEL_13;
        goto LABEL_8;
      }
      if ( a1 > 0xA0 )
      {
LABEL_8:
        if ( !a1 )
        {
          if ( a2 == -1 )
            goto LABEL_15;
LABEL_11:
          if ( a2 >= 0x200 )
            goto LABEL_13;
          goto LABEL_12;
        }
        if ( a1 <= a2 )
        {
          if ( a1 <= 0x200 )
            goto LABEL_11;
LABEL_12:
          result &= ~2u;
          goto LABEL_13;
        }
        if ( a2 <= 0x200 && a1 >= 0x200 )
          goto LABEL_12;
LABEL_13:
        if ( a1 > a2 )
        {
          if ( a2 < 0xA9 && a1 > 0xA1 )
            goto LABEL_19;
          goto LABEL_16;
        }
        if ( a1 > 0xA9 )
        {
LABEL_16:
          if ( a1 <= a2 )
          {
            if ( a2 >= 0x201 && a1 <= 0x20E )
              goto LABEL_19;
LABEL_18:
            result &= ~4u;
            goto LABEL_19;
          }
          if ( a2 >= 0x20E || a1 <= 0x201 )
            goto LABEL_18;
LABEL_19:
          if ( a1 > a2 )
          {
            if ( a2 < 0x109 && a1 > 0x100 )
            {
LABEL_22:
              if ( a1 > a2 )
              {
                if ( a2 < 0xFF && a1 > 0xFF )
                {
LABEL_25:
                  if ( a1 > a2 )
                  {
                    if ( a2 < 0x240 && a1 > 0x240 )
                    {
LABEL_32:
                      if ( a1 > a2 )
                      {
                        if ( a2 < 0x257 && a1 > 0x245 )
                          goto LABEL_40;
                        goto LABEL_35;
                      }
                      if ( a1 > 0x257 )
                      {
LABEL_35:
                        if ( a1 <= a2 )
                        {
                          if ( a2 >= 0x241 && a1 <= 0x244 )
                            goto LABEL_40;
LABEL_37:
                          if ( a1 > a2 )
                          {
                            if ( a2 < 0x238 && a1 > 0x238 )
                              goto LABEL_40;
                          }
                          else if ( a2 >= 0x238 && a1 <= 0x238 )
                          {
                            goto LABEL_40;
                          }
                          result &= ~0x1000u;
                          goto LABEL_40;
                        }
                        if ( a2 >= 0x244 || a1 <= 0x241 )
                          goto LABEL_37;
LABEL_40:
                        if ( a1 )
                        {
                          if ( a1 > a2 )
                          {
                            if ( a2 > 0xF || a1 < 0xF )
                            {
LABEL_44:
                              if ( a1 )
                              {
                                if ( a1 > a2 )
                                {
                                  if ( a2 > 0x113 || a1 < 0x113 )
                                    goto LABEL_53;
                                  goto LABEL_48;
                                }
                                if ( a1 > 0x113 )
                                  goto LABEL_48;
                              }
                              else if ( a2 == -1 )
                              {
                                return result;
                              }
                              if ( a2 >= 0x113 )
                                goto LABEL_53;
LABEL_48:
                              if ( a1 )
                              {
                                if ( a1 > a2 )
                                {
                                  if ( a2 > 0x118 || a1 < 0x118 )
                                    goto LABEL_53;
                                }
                                else if ( a1 <= 0x118 )
                                {
                                  goto LABEL_51;
                                }
LABEL_52:
                                result &= ~0x10u;
LABEL_53:
                                if ( a1 == 35 )
                                  return result | 0x3C07;
                                return result;
                              }
                              if ( a2 == -1 )
                                return result;
LABEL_51:
                              if ( a2 >= 0x118 )
                                goto LABEL_53;
                              goto LABEL_52;
                            }
                          }
                          else if ( a1 <= 0xF )
                          {
                            goto LABEL_43;
                          }
LABEL_58:
                          result &= ~0x20u;
                          goto LABEL_44;
                        }
                        if ( a2 == -1 )
                          return result;
LABEL_43:
                        if ( a2 >= 0xF )
                          goto LABEL_44;
                        goto LABEL_58;
                      }
LABEL_34:
                      if ( a2 >= 0x245 )
                        goto LABEL_40;
                      goto LABEL_35;
                    }
                  }
                  else if ( a2 >= 0x240 && a1 <= 0x240 )
                  {
                    goto LABEL_32;
                  }
                  if ( a1 )
                  {
                    if ( a1 > a2 )
                    {
                      if ( a2 > 0x11B || a1 < 0x11B )
                        goto LABEL_32;
                    }
                    else if ( a1 <= 0x11B )
                    {
                      goto LABEL_30;
                    }
LABEL_31:
                    result &= ~0x800u;
                    goto LABEL_32;
                  }
                  if ( a2 == -1 )
                    goto LABEL_34;
LABEL_30:
                  if ( a2 >= 0x11B )
                    goto LABEL_32;
                  goto LABEL_31;
                }
              }
              else if ( a2 >= 0xFF && a1 <= 0xFF )
              {
                goto LABEL_25;
              }
              result &= ~0x400u;
              goto LABEL_25;
            }
          }
          else if ( a2 >= 0x100 && a1 <= 0x109 )
          {
            goto LABEL_22;
          }
          result &= ~1u;
          goto LABEL_22;
        }
LABEL_15:
        if ( a2 >= 0xA1 )
          goto LABEL_19;
        goto LABEL_16;
      }
    }
    else if ( a2 == -1 )
    {
      goto LABEL_15;
    }
    if ( a2 >= 0xA0 )
      goto LABEL_13;
    goto LABEL_8;
  }
  return result;
}
