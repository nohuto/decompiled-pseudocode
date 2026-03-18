/*
 * XREFs of bConstructGET @ 0x1C00C4860
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C009A120 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z @ 0x1C00C4978 (-AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall bConstructGET(__int64 a1, __int64 a2, struct EDGE *a3, struct _RECTL *a4)
{
  struct _POINTFIX *v4; // r12
  struct _KTHREAD *CurrentThread; // r13
  struct _POINTFIX *v9; // rdi
  struct _POINTFIX *i; // rbx
  struct EDGE *v11; // rax
  struct _POINTFIX *v12; // rbp
  FIX x; // r8d
  struct _POINTFIX *v14; // rdx
  struct _POINTFIX *v15; // rax
  unsigned __int64 v16; // r13
  struct _KTHREAD *v18; // [rsp+78h] [rbp+10h]

  *(_QWORD *)a2 = a2;
  v4 = 0LL;
  *(_DWORD *)(a2 + 16) = 0x7FFFFFFF;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v18 = CurrentThread;
  for ( i = *(struct _POINTFIX **)(*(_QWORD *)(a1 + 8) + 32LL); ; i = (struct _POINTFIX *)*i )
  {
    if ( !i )
      return 1LL;
    if ( PsIsThreadTerminating(CurrentThread) )
      break;
    x = i[2].x;
    v14 = i + 3;
    v12 = i + 4;
    v15 = i + 3;
    if ( (x & 1) == 0 )
    {
      v12 = i + 3;
      v15 = v9;
      v14 = v4;
    }
    v9 = v15;
    v4 = v14;
    if ( v12 < &i[(unsigned int)i[2].y + 3] )
    {
      v16 = (unsigned __int64)&i[(unsigned int)i[2].y + 3];
      do
      {
        v11 = AddEdgeToGET((struct EDGE *)a2, a3, v9, v12, a4);
        v9 = v12;
        a3 = v11;
        ++v12;
      }
      while ( (unsigned __int64)v12 < v16 );
      x = i[2].x;
      CurrentThread = v18;
    }
    if ( (x & 2) != 0 )
    {
      a3 = AddEdgeToGET((struct EDGE *)a2, a3, v9, v4, a4);
      v9 = 0LL;
    }
  }
  return 0LL;
}
