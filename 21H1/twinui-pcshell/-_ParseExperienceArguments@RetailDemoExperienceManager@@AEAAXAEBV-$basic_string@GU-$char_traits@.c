/*
 * XREFs of ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801CAE60
 * Callers:
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1801C9570 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180067F7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x18008C330 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18017C944 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x1801CB118 (-_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801CB238 (-_ParseScreenRect@RetailDemoExperienceManager@@CA-AUtagRECT@@AEBV-$basic_string@GU-$char_traits@.c)
 *     ?_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801CB378 (-_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1801CB6AC (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall RetailDemoExperienceManager::_ParseExperienceArguments(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 *v5; // r11
  __int64 *v6; // r11
  __int64 *v7; // r11
  __int64 *v8; // r11
  __int64 *v9; // r11
  __int64 v10; // rdx
  __int64 *v11; // r11
  __int64 v12; // rdx
  __int64 *v13; // r11
  __int64 *v14; // r11
  __int64 v15; // r11
  DWORD pdwDefaultLayout; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v17[3]; // [rsp+28h] [rbp-21h] BYREF
  __int64 *v18[3]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v20[4]; // [rsp+68h] [rbp+1Fh] BYREF

  RetailDemoExperienceManager::_SetDefaults((RetailDemoExperienceManager *)a1);
  RetailDemoExperienceManager::_SplitString(v17, v2, 38LL);
  v3 = v17[0];
  v4 = v17[1];
  while ( v3 != v4 )
  {
    std::wstring::wstring((__int64)v20);
    RetailDemoExperienceManager::_SplitString(v18, v20, 61LL);
    if ( (unsigned int)std::wstring::compare(v18[0], L"zBand") )
    {
      if ( (unsigned int)std::wstring::compare(v5, L"topmost") )
      {
        if ( (unsigned int)std::wstring::compare(v6, L"docked") )
        {
          if ( (unsigned int)std::wstring::compare(v7, L"dockedSide") )
          {
            if ( (unsigned int)std::wstring::compare(v8, L"adjustDesktop") )
            {
              if ( (unsigned int)std::wstring::compare(v9, L"dockedWidth") )
              {
                if ( (unsigned int)std::wstring::compare(v11, L"dockedMargin") )
                {
                  if ( (unsigned int)std::wstring::compare(v13, L"dockedHeight") )
                  {
                    if ( !(unsigned int)std::wstring::compare(v14, L"floatingRect") )
                      *(_OWORD *)(a1 + 364) = *(_OWORD *)RetailDemoExperienceManager::_ParseScreenRect(v19, v15 + 32);
                  }
                  else
                  {
                    *(_DWORD *)(a1 + 360) = RetailDemoExperienceManager::_ParseScreenInt(v14 + 4, 0LL, 0LL);
                  }
                }
                else
                {
                  LOBYTE(v12) = 1;
                  *(_DWORD *)(a1 + 356) = RetailDemoExperienceManager::_ParseScreenInt(v13 + 4, v12, 0LL);
                }
              }
              else
              {
                LOBYTE(v10) = 1;
                *(_DWORD *)(a1 + 352) = RetailDemoExperienceManager::_ParseScreenInt(v11 + 4, v10, 0LL);
              }
            }
            else
            {
              *(_BYTE *)(a1 + 381) = (unsigned int)std::wstring::compare(v9 + 4, L"true") == 0;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 382) = (unsigned int)std::wstring::compare(v8 + 4, L"right") == 0;
            pdwDefaultLayout = 0;
            GetProcessDefaultLayout(&pdwDefaultLayout);
            if ( pdwDefaultLayout == 1 )
              *(_BYTE *)(a1 + 382) = *(_BYTE *)(a1 + 382) == 0;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 380) = (unsigned int)std::wstring::compare(v7 + 4, L"true") == 0;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 348) = (unsigned int)std::wstring::compare(v6 + 4, L"true") == 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 344) = _o__wtol();
    }
    std::vector<std::wstring>::_Tidy(v18);
    std::wstring::_Tidy_deallocate(v20);
    v3 += 32LL;
  }
  std::vector<std::wstring>::_Tidy(v17);
}
