/*
 * XREFs of ?AddElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QAEJPAVCPhysicalMonitorHandle@@PAK@Z @ 0x1CEEE7
 * Callers:
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAVCPhysicalMonitorHandle@@PAPAX@Z @ 0x1CEFA9 (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAVCPhysicalMonito.c)
 * Callees:
 *     <none>
 */

int __thiscall OPM::CList<CPhysicalMonitorHandle>::AddElement(int this, int a2, unsigned int *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  _DWORD *v6; // edx
  unsigned int v8; // eax
  unsigned int i; // ecx
  unsigned int v10; // eax
  char v11; // cl
  enum _POOL_TYPE v12; // [esp+0h] [ebp-10h]
  void *v13; // [esp+0h] [ebp-10h]
  _DWORD *v14; // [esp+Ch] [ebp-4h]

  v4 = *(_DWORD *)(this + 8);
  if ( *(_DWORD *)(this + 4) == v4 )
  {
    if ( v4 )
    {
      v5 = 2 * v4;
      if ( !is_mul_ok(2u, v4) )
        return -1073741675;
    }
    else
    {
      v5 = 16;
    }
    v6 = OPM::OPMAllocateMemory((OPM *)(4 * v5), 1u, v12);
    v14 = v6;
    if ( !v6 )
      return -1073741801;
    v8 = *(_DWORD *)(this + 8);
    for ( i = 0; i < v8; v8 = *(_DWORD *)(this + 8) )
    {
      v6[i] = *(_DWORD *)(*(_DWORD *)this + 4 * i);
      ++i;
    }
    if ( v8 < v5 )
      memset(&v6[v8], 0, 4 * (v5 - v8));
    OPM::OPMFreeMemory(*(OPM **)this, v13);
    *(_DWORD *)this = v14;
    *(_DWORD *)(this + 8) = v5;
  }
  v10 = 0;
  v11 = 0;
  do
  {
    if ( v10 >= *(_DWORD *)(this + 8) )
      break;
    if ( !*(_DWORD *)(*(_DWORD *)this + 4 * v10) )
    {
      v11 = 1;
      *(_DWORD *)(*(_DWORD *)this + 4 * v10) = a2;
      *a3 = v10;
    }
    ++v10;
  }
  while ( !v11 );
  ++*(_DWORD *)(this + 4);
  return 0;
}
