/*
 * XREFs of CleanupInputDelegation @ 0x1C002A9E0
 * Callers:
 *     DestroyBaseWindow @ 0x1C01438D0 (DestroyBaseWindow.c)
 * Callees:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C002AAB0 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C012A480 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 */

struct _HANDLEENTRY *__fastcall CleanupInputDelegation(_DWORD *a1)
{
  struct _HANDLEENTRY *result; // rax
  char v3; // cl
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v4);
  result = qword_1C0250D48;
  v3 = *((_BYTE *)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*a1 + 24);
  if ( v3 == 1 )
    return (struct _HANDLEENTRY *)anonymous_namespace_::ScrubDelegatedWindow_tagWND___(a1);
  if ( v3 == 23 )
    return (struct _HANDLEENTRY *)anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(a1);
  return result;
}
