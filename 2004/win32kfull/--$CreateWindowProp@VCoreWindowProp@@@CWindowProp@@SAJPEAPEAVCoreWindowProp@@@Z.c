/*
 * XREFs of ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x1C011949C
 * Callers:
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0119404 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CoreWindowProp>(_QWORD *a1)
{
  unsigned int v2; // ebx
  _OWORD *v3; // rax

  v2 = 0;
  v3 = (_OWORD *)Win32AllocPoolZInit(48LL, 1920430933LL);
  if ( v3 )
  {
    *a1 = v3;
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    *(_QWORD *)v3 = &CoreWindowProp::`vftable';
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
