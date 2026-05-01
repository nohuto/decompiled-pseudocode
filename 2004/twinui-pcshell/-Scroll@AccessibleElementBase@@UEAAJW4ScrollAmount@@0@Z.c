/*
 * XREFs of ?Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z @ 0x1803B4B50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001BD54 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     GetThreadUILanguage_0 @ 0x18008EA46 (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803B4F78 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::Scroll(AccessibleElementBase *this, int a2, int a3)
{
  int Element; // ebx
  LANGID v7; // ax
  __int64 v8; // rdx
  LANGID ThreadUILanguage_0; // ax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 48),
              &GUID_2ee57b14_e8de_441b_ba80_94bbf2ee0423,
              &v11);
  if ( Element >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v11 + 96LL))(v11) )
    {
      if ( a2 >= 0 )
      {
        if ( a2 <= 1 )
        {
          ThreadUILanguage_0 = GetThreadUILanguage_0();
          v8 = (unsigned int)((unsigned int)IsBiDiLocale(ThreadUILanguage_0) != 0) + 3;
          goto LABEL_13;
        }
        if ( (unsigned int)(a2 - 3) <= 1 )
        {
          v7 = GetThreadUILanguage_0();
          v8 = 4 - (unsigned int)((unsigned int)IsBiDiLocale(v7) != 0);
LABEL_13:
          (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v11 + 32LL))(v11, v8);
        }
      }
    }
    else if ( a3 >= 0 )
    {
      if ( a3 <= 1 )
      {
        v8 = 1LL;
        goto LABEL_13;
      }
      if ( (unsigned int)(a3 - 3) <= 1 )
      {
        v8 = 2LL;
        goto LABEL_13;
      }
    }
    Element = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return (unsigned int)Element;
}
