/*
 * XREFs of ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x180022384
 * Callers:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800222C4 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 * Callees:
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x1800224A4 (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180066F44 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _lambda_846207132ca0d62201dd0675f9ebdb0a_::operator() @ 0x1800BBDB4 (_lambda_846207132ca0d62201dd0675f9ebdb0a_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RegistryWatcher::Initialize(HKEY *this, HKEY a2, const unsigned __int16 *a3)
{
  char v5; // si
  _QWORD *v6; // r14
  int v7; // eax
  unsigned int LastError; // ebx
  LSTATUS v9; // eax
  HKEY EventW; // rax
  const char *v11; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int phkResult; // [rsp+20h] [rbp-28h]
  HKEY *v16; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v16 = this;
  v5 = 1;
  v17 = 1;
  v6 = this + 2;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(this + 2);
  v7 = CoreUICreate(v6);
  LastError = v7;
  if ( v7 < 0 )
  {
    v13 = 65LL;
LABEL_17:
    v14 = (unsigned int)v7;
    goto LABEL_18;
  }
  v9 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, a3, 0, 0x20019u, this + 3);
  LastError = v9;
  if ( v9 > 0 )
    LastError = (unsigned __int16)v9 | 0x80070000;
  if ( (LastError & 0x80000000) == 0 )
  {
    EventW = (HKEY)CreateEventW(0LL, 0, 0, 0LL);
    this[4] = EventW;
    if ( !EventW )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x4C,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
                    v11);
      goto LABEL_9;
    }
    v7 = RegistryWatcher::OnKeyChange((RegistryWatcher *)this);
    LastError = v7;
    if ( v7 < 0 )
    {
      v13 = 77LL;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, HKEY, int (*)(void *, unsigned int, void *), HKEY *))(*(_QWORD *)*v6
                                                                                                  + 256LL))(
             *v6,
             this[4],
             RegistryWatcher::OnChangeCallbackStatic,
             this);
      LastError = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        LastError = 0;
        goto LABEL_9;
      }
      v13 = 82LL;
    }
    goto LABEL_17;
  }
  v14 = LastError;
  v13 = 73LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
    (const char *)v14,
    phkResult);
LABEL_9:
  if ( v5 )
  {
    v17 = 0;
    lambda_846207132ca0d62201dd0675f9ebdb0a_::operator()(&v16);
  }
  return LastError;
}
