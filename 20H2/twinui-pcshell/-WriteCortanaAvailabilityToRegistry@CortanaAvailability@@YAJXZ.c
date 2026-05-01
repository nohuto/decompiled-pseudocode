/*
 * XREFs of ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1802056C8
 * Callers:
 *     _lambda_841554dac235e76a966632a629acea57_::operator() @ 0x180098860 (_lambda_841554dac235e76a966632a629acea57_--operator().c)
 *     _lambda_9b5424b1010544f2b98d3b56c8ee7c3a_::operator() @ 0x180098918 (_lambda_9b5424b1010544f2b98d3b56c8ee7c3a_--operator().c)
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801F4968 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z @ 0x1801F37E0 (-IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z.c)
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1801F9E68 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z @ 0x180205198 (-SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z.c)
 */

__int64 __fastcall CortanaAvailability::WriteCortanaAvailabilityToRegistry(
        CortanaAvailability *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  unsigned __int8 *v3; // rdx
  unsigned int IsCortanaAvailable; // ebx
  int v5; // edi
  __int64 v6; // rdx
  unsigned __int8 v8; // si
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  IsCortanaAvailable = CortanaExperienceHelpers::IsCortanaAvailable((CortanaExperienceHelpers *)&v10, a2, a3);
  if ( (int)(IsCortanaAvailable + 0x80000000) >= 0 && IsCortanaAvailable != -2147024894 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)IsCortanaAvailable);
  v5 = CortanaAvailability::CheckCortanaAvailability((CortanaAvailability *)&v11, v3);
  if ( v5 < 0 )
  {
    v6 = 234LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = v11;
  v5 = CortanaExperienceHelpers::SetCortanaRegKey(L"IsAvailable", (const unsigned __int16 *)v11);
  if ( v5 < 0 )
  {
    v6 = 235LL;
    goto LABEL_6;
  }
  if ( v8 != v10 || IsCortanaAvailable == -2147024894 )
    SendNotifyMessageW(HWND_BROADCAST, 0x1Au, 0LL, (LPARAM)L"TraySettings");
  return 0LL;
}
