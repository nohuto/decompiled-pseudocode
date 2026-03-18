/*
 * XREFs of ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801CA144
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x1802353E0 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 * Callees:
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800A95D8 (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800AF718 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x1800AF9F0 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x1800AFA14 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z @ 0x1801C998C (--$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z.c)
 */

__int64 __fastcall CInteractionRoot::Initialize(CInteractionRoot *this, struct IManipulationContext *a2, char a3)
{
  CInteractionContextWrapper *v5; // rax
  CInteractionContextWrapper *v6; // rbx
  CInteractionContextWrapper *v7; // rax
  CInteractionContextWrapper *v8; // r14
  CInteractionContextWrapper *v9; // rax
  CInteractionContextWrapper *v10; // rsi
  CInteractionContextWrapper *v11; // rax
  char *v12; // rdi
  int v13; // ebx
  __int64 v14; // r8
  CInteractionContextWrapper *v16; // [rsp+30h] [rbp-30h] BYREF
  CInteractionContextWrapper *v17; // [rsp+38h] [rbp-28h] BYREF
  CInteractionContextWrapper *v18; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  int v20; // [rsp+50h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *((_QWORD *)this + 173) = a2;
  v5 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( v5 )
    v6 = CInteractionContextWrapper::CInteractionContextWrapper(v5);
  else
    v6 = 0LL;
  v19 = (unsigned __int64)v6;
  if ( !v6 )
    goto LABEL_16;
  v7 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  v8 = v7 ? CInteractionContextWrapper::CInteractionContextWrapper(v7) : 0LL;
  v16 = v8;
  v9 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  v10 = v9 ? CInteractionContextWrapper::CInteractionContextWrapper(v9) : 0LL;
  v17 = v10;
  if ( !v10 )
    goto LABEL_16;
  v11 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( v11 )
    v11 = CInteractionContextWrapper::CInteractionContextWrapper(v11);
  v18 = v11;
  if ( v11 )
  {
    v12 = (char *)this + 32;
    v13 = CInteractionProcessor::Initialize((CInteractionRoot *)((char *)this + 32), v6, v8, v10, v11, 1);
  }
  else
  {
LABEL_16:
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v19);
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v16);
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v17);
    SAFE_DELETE<IInteractionContextWrapper>((void **)&v18);
    v12 = (char *)this + 32;
    v13 = -2147024882;
  }
  if ( v13 >= 0 )
  {
    v19 = 0xFFFFFFFF00000001uLL;
    v20 = -805306369;
    v13 = CInteractionProcessor::SetInteractionConfiguration((__int64)v12, 0, 1, &v19, 1u);
    if ( v13 >= 0 )
    {
      v19 = 0xFFFFFFFF00000001uLL;
      v20 = -805306369;
      v13 = CInteractionProcessor::SetInteractionConfiguration((__int64)v12, 0, 2, &v19, 1u);
      if ( v13 >= 0 )
      {
        LODWORD(v16) = -805306369;
        v13 = CInteractionProcessor::SetInteractionConfiguration((__int64)v12, 0, 4, &v16, 1u);
        if ( v13 >= 0 )
        {
          v19 = 0xFFFFFFFF00000001uLL;
          v20 = -805306369;
          v13 = CInteractionProcessor::SetInteractionConfiguration((__int64)v12, 0, 5, &v19, 1u);
          if ( v13 >= 0 )
          {
            v19 = 0xFFFFFFFF00000001uLL;
            v20 = -805306369;
            v13 = CInteractionProcessor::SetInteractionConfiguration((__int64)v12, 0, 3, &v19, 1u);
            if ( v13 >= 0 )
            {
              if ( a3 )
              {
                LOBYTE(v14) = a3;
                (*(void (__fastcall **)(CInteractionRoot *, _QWORD, __int64, __int64))(*(_QWORD *)this + 40LL))(
                  this,
                  0LL,
                  v14,
                  1LL);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v13;
}
