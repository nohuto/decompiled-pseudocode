/*
 * XREFs of CleanupInputDelegation @ 0x1C009B050
 * Callers:
 *     DestroyBaseWindow @ 0x1C013B230 (DestroyBaseWindow.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1C009B120 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1C0122150 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 */

struct _HANDLEENTRY *__fastcall CleanupInputDelegation(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _HANDLEENTRY *result; // rax
  char v6; // cl
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v7,
    a2,
    a3,
    a4);
  result = qword_1C0248D48;
  v6 = *((_BYTE *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*a1 + 24);
  if ( v6 == 1 )
    return (struct _HANDLEENTRY *)anonymous_namespace_::ScrubDelegatedWindow_tagWND___(a1);
  if ( v6 == 23 )
    return (struct _HANDLEENTRY *)anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(a1);
  return result;
}
