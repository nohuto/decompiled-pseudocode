/*
 * XREFs of xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E606C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     IsChildWindowDpiBoundary @ 0x1C0046590 (IsChildWindowDpiBoundary.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 */

void __fastcall xxxUpdateWindowPositionsForDpiBoundaryChange(__int64 *a1)
{
  __int64 *v1; // rbx
  struct tagWND *v2; // rax
  struct tagWND *v3; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (struct tagWND *)HMValidateHandleNoSecure(v1[1], 1);
      v3 = v2;
      if ( v2 && (*((_DWORD *)v1 + 7) || *((_DWORD *)v1 + 6) || (unsigned int)IsChildWindowDpiBoundary(v2)) )
        xxxSetWindowPos(v3, 0LL, *((unsigned int *)v1 + 4), *((unsigned int *)v1 + 5), 0, 0, 21);
      v1 = (__int64 *)*v1;
    }
    while ( v1 );
  }
}
