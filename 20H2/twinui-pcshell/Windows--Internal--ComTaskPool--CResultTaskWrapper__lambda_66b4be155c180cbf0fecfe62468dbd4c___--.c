/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_66b4be155c180cbf0fecfe62468dbd4c___::Run @ 0x18004F740
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_66b4be155c180cbf0fecfe62468dbd4c_::operator() @ 0x18004F768 (_lambda_66b4be155c180cbf0fecfe62468dbd4c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_66b4be155c180cbf0fecfe62468dbd4c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_66b4be155c180cbf0fecfe62468dbd4c_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
