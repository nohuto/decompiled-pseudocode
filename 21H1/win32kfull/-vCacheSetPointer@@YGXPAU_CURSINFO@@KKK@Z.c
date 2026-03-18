/*
 * XREFs of ?vCacheSetPointer@@YGXPAU_CURSINFO@@KKK@Z @ 0x7739E
 * Callers:
 *     _GreSetPointer@16 @ 0x771C2 (_GreSetPointer@16.c)
 * Callees:
 *     <none>
 */

void __userpurge vCacheSetPointer(
        int a1@<edx>,
        int a2@<ecx>,
        struct _CURSINFO *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  if ( a2 )
  {
    gCachedSetPointerState = a2;
    byte_272888 = 1;
  }
  else
  {
    gCachedSetPointerState = 0;
    byte_272888 = 0;
  }
  dword_272880 = (int)a3;
  dword_27287C = a1;
  dword_272884 = a4;
}
