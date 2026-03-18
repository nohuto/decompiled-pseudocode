/*
 * XREFs of _FreeFileView@8 @ 0xCE1EE
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z @ 0xCE01C (-vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z @ 0xDF050 (-Remove@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z.c)
 *     _vUnmapRemoteFonts@4 @ 0x1E9844 (_vUnmapRemoteFonts@4.c)
 */

int __fastcall FreeFileView(unsigned int a1, int a2)
{
  int v2; // edi
  unsigned int v4; // eax
  unsigned int v5; // edi
  int *v6; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // [esp+10h] [ebp-10h]
  int v12; // [esp+18h] [ebp-8h] BYREF
  unsigned int v13; // [esp+1Ch] [ebp-4h] BYREF

  v2 = a2;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v13, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  if ( UmfdFileviewLookup )
  {
    v10 = 0;
    v8 = a1 + 4 * v2 >= a1 ? v2 & 0x3FFFFFFF : 0;
    if ( v8 )
    {
      v9 = a1;
      do
      {
        v12 = *(_DWORD *)(*(_DWORD *)v9 + 36);
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(&v12);
        v9 += 4;
        ++v10;
      }
      while ( v10 < v8 );
      v2 = a2;
    }
  }
  if ( v13 )
  {
    ExReleasePushLockExclusiveEx(v13, 0);
    KeLeaveCriticalRegion();
  }
  v4 = a1 + 4 * v2;
  v5 = 0;
  v6 = (int *)a1;
  v13 = v4 >= a1 ? a2 & 0x3FFFFFFF : 0;
  if ( v13 )
  {
    do
    {
      if ( *(_DWORD *)(*v6 + 52) )
        vUnmapRemoteFonts(*v6);
      else
        vUnreferenceFileviewSection(*v6);
      ++v6;
      ++v5;
    }
    while ( v5 < v13 );
  }
  return Win32FreePool(a1);
}
