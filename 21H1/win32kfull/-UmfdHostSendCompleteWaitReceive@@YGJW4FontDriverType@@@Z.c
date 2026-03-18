/*
 * XREFs of ?UmfdHostSendCompleteWaitReceive@@YGJW4FontDriverType@@@Z @ 0x8BB2A
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8BA08 (-UmfdEscSendCompleteWaitReceive@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?UmfdCreateRequestContext@@YGPAXXZ @ 0x874EC (-UmfdCreateRequestContext@@YGPAXXZ.c)
 *     ?UmfdServerSendCompleteAndWaitReceive@@YGJPAX0K0PAK0@Z @ 0x8BBEE (-UmfdServerSendCompleteAndWaitReceive@@YGJPAX0K0PAK0@Z.c)
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 */

int __fastcall UmfdHostSendCompleteWaitReceive(unsigned int a1)
{
  struct UmfdTls *v2; // eax
  struct UmfdTls *v3; // esi
  int v4; // eax
  int v5; // edi
  _DWORD *RequestContext; // ebx
  int v7; // ecx
  unsigned int *v9; // [esp+0h] [ebp-18h]
  void *v10; // [esp+4h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h] BYREF
  unsigned int v13; // [esp+14h] [ebp-4h] BYREF

  v2 = UmfdTls::EnsureTls();
  v3 = v2;
  if ( !v2 )
    return -1073741801;
  if ( a1 > 3 )
    return -1073741811;
  v4 = *((_DWORD *)v2 + 1);
  if ( v4 != -1 )
  {
    if ( v4 == a1 )
      goto LABEL_5;
    return -1073741811;
  }
  *((_DWORD *)v3 + 1) = a1;
LABEL_5:
  if ( !(&g_pUmfdServerPort)[a1] )
    return -1073740032;
  v5 = *((_DWORD *)v3 + 2);
  if ( v5 )
  {
    RequestContext = (_DWORD *)*((_DWORD *)v3 + 2);
    goto LABEL_8;
  }
  RequestContext = UmfdCreateRequestContext();
  if ( !RequestContext )
    return -1073741801;
LABEL_8:
  v12 = 0;
  v13 = 0;
  v7 = UmfdServerSendCompleteAndWaitReceive(&v12, &v12, (unsigned int)&v13, RequestContext, v9, v10);
  v11 = v7;
  if ( v7 < 0 )
    goto LABEL_19;
  if ( v13 != 4 )
  {
    v7 = -1073741823;
    v11 = -1073741823;
  }
  if ( v7 < 0 )
  {
LABEL_19:
    if ( !v5 )
    {
      EngFreeMem(RequestContext);
      return v11;
    }
  }
  else
  {
    if ( !v5 )
      *((_DWORD *)v3 + 2) = RequestContext;
    *((_DWORD *)v3 + 3) = v12;
  }
  return v7;
}
