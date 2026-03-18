/*
 * XREFs of SetDisplayAffinity @ 0x1C0247B80
 * Callers:
 *     NtUserSetWindowDisplayAffinity @ 0x1C0202AF0 (NtUserSetWindowDisplayAffinity.c)
 * Callees:
 *     ComposeWindowIfNeeded @ 0x1C00918CC (ComposeWindowIfNeeded.c)
 *     InternalSetProp @ 0x1C00C7238 (InternalSetProp.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0247870 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     GetDisplayAffinity @ 0x1C0247B2C (GetDisplayAffinity.c)
 */

__int64 __fastcall SetDisplayAffinity(struct tagWND *a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v10 = 0;
  v5 = a2;
  if ( (*(_BYTE *)(v2 + 27) & 0x20) == 0 )
    ComposeWindowIfNeeded(a1);
  if ( (unsigned int)GetDisplayAffinity((__int64)a1, &v10) )
  {
    v6 = (unsigned __int16)atomDispAffinity;
    if ( (_DWORD)v5 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v5, 5u) )
        return v3;
    }
    else
    {
      v7 = *((_QWORD *)a1 + 18);
      if ( atomDispAffinity == word_1C0339F54 )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v7, v6, 1LL);
    }
    v8 = v5 & 0x11;
    v3 = 1;
    if ( (v10 & 0x11) != v8 )
    {
      v3 = ChangeWindowTreeProtection(a1, v8);
      if ( !v3 )
        InternalSetProp((__int64)a1, (unsigned __int16)atomDispAffinity, v10, 5u);
    }
  }
  return v3;
}
