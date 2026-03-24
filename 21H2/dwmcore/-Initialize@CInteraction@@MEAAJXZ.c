/*
 * XREFs of ?Initialize@CInteraction@@MEAAJXZ @ 0x1800B5FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800B60D8 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x1800B63B0 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x1800B63D4 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 *     ??$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z @ 0x1801C5CF8 (--$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z.c)
 */

__int64 __fastcall CInteraction::Initialize(CInteraction *this)
{
  CInteractionContextWrapper *v2; // rax
  unsigned __int64 v3; // rcx
  struct IInteractionContextWrapper *v4; // rbx
  CInteractionContextWrapper *v5; // rax
  unsigned __int64 v6; // rcx
  struct IInteractionContextWrapper *v7; // rdi
  CInteractionContextWrapper *v8; // rax
  unsigned __int64 v9; // rcx
  struct IInteractionContextWrapper *v10; // rsi
  CInteractionContextWrapper *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  struct IInteractionContextWrapper *v17; // [rsp+30h] [rbp-28h] BYREF
  struct IInteractionContextWrapper *v18; // [rsp+68h] [rbp+10h] BYREF
  struct IInteractionContextWrapper *v19; // [rsp+70h] [rbp+18h] BYREF
  CInteractionContextWrapper *v20; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v2 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new((unsigned __int64)this);
  if ( v2 )
    v4 = CInteractionContextWrapper::CInteractionContextWrapper(v2);
  else
    v4 = 0LL;
  v17 = v4;
  if ( !v4 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024882, 0x7Eu, 0LL);
LABEL_24:
    SAFE_DELETE<IInteractionContextWrapper>(&v17);
    SAFE_DELETE<IInteractionContextWrapper>(&v18);
    SAFE_DELETE<IInteractionContextWrapper>(&v19);
    SAFE_DELETE<IInteractionContextWrapper>(&v20);
    return v15;
  }
  v5 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v3);
  if ( v5 )
    v7 = CInteractionContextWrapper::CInteractionContextWrapper(v5);
  else
    v7 = 0LL;
  v18 = v7;
  if ( !v7 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x81u, 0LL);
    goto LABEL_24;
  }
  v8 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v6);
  if ( v8 )
    v10 = CInteractionContextWrapper::CInteractionContextWrapper(v8);
  else
    v10 = 0LL;
  v19 = v10;
  if ( !v10 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x84u, 0LL);
    goto LABEL_24;
  }
  v11 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v9);
  if ( v11 )
    v11 = CInteractionContextWrapper::CInteractionContextWrapper(v11);
  v20 = v11;
  if ( !v11 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x87u, 0LL);
    goto LABEL_24;
  }
  v13 = CInteractionProcessor::Initialize((CInteraction *)((char *)this + 336), v4, v7, v10, v11, 0);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x89u, 0LL);
    goto LABEL_24;
  }
  return v15;
}
