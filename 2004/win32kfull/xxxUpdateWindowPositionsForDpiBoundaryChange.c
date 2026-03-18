/*
 * XREFs of xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E6D2C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F7CC (IsChildWindowDpiBoundary.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
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
