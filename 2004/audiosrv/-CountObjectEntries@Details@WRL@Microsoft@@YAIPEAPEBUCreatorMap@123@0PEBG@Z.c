/*
 * XREFs of ?CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z @ 0x180056564
 * Callers:
 *     ??$RegisterObjects@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBG@Z @ 0x1800562A4 (--$RegisterObjects@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBG@Z.c)
 *     ?UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z @ 0x1800BB7CC (-UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::CountObjectEntries(
        Microsoft::WRL::Details *this,
        const struct Microsoft::WRL::Details::CreatorMap **a2,
        const struct Microsoft::WRL::Details::CreatorMap **a3,
        const unsigned __int16 *a4)
{
  char *v4; // r9
  unsigned int v6; // r10d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r11
  char *v10; // rax
  char *v11; // r8
  int v12; // edx
  int v13; // ecx

  v4 = (char *)this + 8;
  v6 = 0;
  v7 = 0LL;
  v8 = (unsigned __int64)((char *)a2 - ((char *)this + 8) + 7) >> 3;
  if ( (char *)this + 8 > (char *)a2 )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      if ( *(_QWORD *)v4 )
      {
        if ( !a3 )
          goto LABEL_6;
        v10 = *(char **)(*(_QWORD *)v4 + 32LL);
        if ( v10 )
        {
          v11 = (char *)((char *)a3 - v10);
          do
          {
            v12 = *(unsigned __int16 *)&v11[(_QWORD)v10];
            v13 = *(unsigned __int16 *)v10 - v12;
            if ( v13 )
              break;
            v10 += 2;
          }
          while ( v12 );
          if ( !v13 )
LABEL_6:
            ++v6;
        }
      }
      v4 += 8;
      ++v7;
    }
    while ( v7 < v8 );
  }
  return v6;
}
