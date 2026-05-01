/*
 * XREFs of ?Navigate@CoverWindowAcc@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x1803F8480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoverWindowAcc::Navigate(
        CoverWindowAcc *this,
        signed int a2,
        struct IRawElementProviderFragment **a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0 )
    {
      if ( a2 > 2 )
      {
        if ( a2 == 3 )
        {
          if ( !*((_QWORD *)this + 4) )
          {
            v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *))this + 5))(
                   *((_QWORD *)this + 5),
                   &GUID_f7063da8_8359_439c_9297_bbc5299a7d87);
            if ( v6 < 0 )
            {
              v7 = 231LL;
              goto LABEL_12;
            }
            return (unsigned int)v6;
          }
        }
        else if ( a2 == 4 && !*((_QWORD *)this + 4) )
        {
          v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *))this + 7))(
                 *((_QWORD *)this + 7),
                 &GUID_f7063da8_8359_439c_9297_bbc5299a7d87);
          if ( v6 < 0 )
          {
            v7 = 238LL;
LABEL_12:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v7,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
              (const char *)(unsigned int)v6);
            return (unsigned int)v6;
          }
          return (unsigned int)v6;
        }
        return 0LL;
      }
      if ( *((_QWORD *)this + 4) )
      {
        v13 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
               *((_QWORD *)this + 4),
               &GUID_231595a6_2227_4cb4_910c_0b70e7e3a76c,
               &v13);
        v10 = v9;
        if ( v9 >= 0 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, struct IRawElementProviderFragment **))(*(_QWORD *)v13 + 24LL))(
                 v13,
                 (char *)this - 8,
                 (unsigned int)a2,
                 a3);
          v10 = v9;
          if ( v9 >= 0 )
          {
LABEL_20:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
            return v10;
          }
          v11 = 248LL;
        }
        else
        {
          v11 = 247LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_20;
      }
    }
  }
  else if ( *((_QWORD *)this + 4) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 4);
    *a3 = (struct IRawElementProviderFragment *)*((_QWORD *)this + 4);
  }
  return 0LL;
}
