/*
 * XREFs of ??$RegisterCOMObject@$00@Details@WRL@Microsoft@@YAJPEBGPEAU_GUID@@PEAPEAUIClassFactory@@PEAKI@Z @ 0x1800686D4
 * Callers:
 *     ?RegisterCOMObject@?$Module@$01VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAJPEBGPEAU_GUID@@PEAPEAUIClassFactory@@PEAKI@Z @ 0x1800686B0 (-RegisterCOMObject@-$Module@$01VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAJPEBGPEAU_GU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RegisterCOMObject<1>(
        __int64 a1,
        __int64 a2,
        LPUNKNOWN *a3,
        DWORD *a4,
        unsigned int a5)
{
  HRESULT v5; // ebx
  __int64 v6; // rsi
  HRESULT v10; // eax

  v5 = 0;
  v6 = 0LL;
  if ( a5 )
  {
    while ( v5 >= 0 )
    {
      v10 = CoRegisterClassObject((const IID *const)(a2 + 16LL * (unsigned int)v6), *a3, 4u, 5u, &a4[v6]);
      v6 = (unsigned int)(v6 + 1);
      ++a3;
      v5 = v10;
      if ( (unsigned int)v6 >= a5 )
      {
        if ( v10 < 0 )
          break;
        goto LABEL_5;
      }
    }
  }
  else
  {
LABEL_5:
    v5 = CoResumeClassObjects();
    if ( v5 >= 0 )
      return (unsigned int)v5;
  }
  if ( (_DWORD)v6 )
  {
    do
    {
      CoRevokeClassObject(*a4);
      *a4++ = 0;
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)v5;
}
